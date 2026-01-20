# 컴파일러 및 도구 설정
CXX      = g++
STRIP    = strip
GHIDRA_HOME ?= tools/ghidra

SRC_DIR    = src
BUILD_DIR  = bin
OUTPUT_DIR = output
GHIDRA_PRJ = ghidra-project

# 소스 파일 및 타겟 설정
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
BASENAMES = $(patsubst $(SRC_DIR)/%.cpp, %, $(SRCS))

# 최적화 레벨 정의
OPT_LEVELS = 0 1 2 3 s

# 타겟 목록 생성
# 1. Normal (Debug info -g 있음)
# bin/normal/O0/file, bin/normal/O1/file ...
NORMAL_BINS = $(foreach opt, $(OPT_LEVELS), $(patsubst %, $(BUILD_DIR)/normal/O$(opt)/%, $(BASENAMES)))
NORMAL_OUTS = $(foreach opt, $(OPT_LEVELS), $(patsubst %, $(OUTPUT_DIR)/normal/O$(opt)/%.c, $(BASENAMES)))

# 2. Stripped (Debug info -g 있고 + 모든 심볼 제거)
# bin/stripped/O0/file, bin/stripped/O1/file ...
STRIP_BINS  = $(foreach opt, $(OPT_LEVELS), $(patsubst %, $(BUILD_DIR)/stripped/O$(opt)/%, $(BASENAMES)))
STRIP_OUTS  = $(foreach opt, $(OPT_LEVELS), $(patsubst %, $(OUTPUT_DIR)/stripped/O$(opt)/%.c, $(BASENAMES)))

# 전체 실행 타겟
all: $(NORMAL_OUTS) $(STRIP_OUTS)

# 필요한 모든 디렉터리 생성
dirs:
	@mkdir -p $(foreach opt, $(OPT_LEVELS), $(BUILD_DIR)/normal/O$(opt) $(BUILD_DIR)/stripped/O$(opt))
	@mkdir -p $(foreach opt, $(OPT_LEVELS), $(OUTPUT_DIR)/normal/O$(opt) $(OUTPUT_DIR)/stripped/O$(opt))
	@mkdir -p $(GHIDRA_PRJ)

# --- 빌드 규칙 ---

# Normal 빌드: -g 포함, 지정된 최적화 레벨 적용
$(BUILD_DIR)/normal/O%/$(1): 
# (위 방식은 가독성을 위해 패턴 매칭으로 구현)

$(BUILD_DIR)/normal/O%: $(SRC_DIR)/%.cpp | dirs
# 이 아래는 Static Pattern Rule을 대신하는 일반 규칙입니다.
$(BUILD_DIR)/normal/O0/%: $(SRC_DIR)/%.cpp | dirs ; $(CXX) -std=c++03 -O0 -g $< -o $@
$(BUILD_DIR)/normal/O1/%: $(SRC_DIR)/%.cpp | dirs ; $(CXX) -std=c++03 -O1 -g $< -o $@
$(BUILD_DIR)/normal/O2/%: $(SRC_DIR)/%.cpp | dirs ; $(CXX) -std=c++03 -O2 -g $< -o $@
$(BUILD_DIR)/normal/O3/%: $(SRC_DIR)/%.cpp | dirs ; $(CXX) -std=c++03 -O3 -g $< -o $@
$(BUILD_DIR)/normal/Os/%: $(SRC_DIR)/%.cpp | dirs ; $(CXX) -std=c++03 -Os -g $< -o $@

# Stripped 빌드: -g로 빌드 후 strip 처리
$(BUILD_DIR)/stripped/O0/%: $(SRC_DIR)/%.cpp | dirs ; $(CXX) -std=c++03 -O0 -g $< -o $@ && $(STRIP) --strip-all $@
$(BUILD_DIR)/stripped/O1/%: $(SRC_DIR)/%.cpp | dirs ; $(CXX) -std=c++03 -O1 -g $< -o $@ && $(STRIP) --strip-all $@
$(BUILD_DIR)/stripped/O2/%: $(SRC_DIR)/%.cpp | dirs ; $(CXX) -std=c++03 -O2 -g $< -o $@ && $(STRIP) --strip-all $@
$(BUILD_DIR)/stripped/O3/%: $(SRC_DIR)/%.cpp | dirs ; $(CXX) -std=c++03 -O3 -g $< -o $@ && $(STRIP) --strip-all $@
$(BUILD_DIR)/stripped/Os/%: $(SRC_DIR)/%.cpp | dirs ; $(CXX) -std=c++03 -Os -g $< -o $@ && $(STRIP) --strip-all $@

# --- Ghidra 분석 규칙 (자동 통합) ---

$(OUTPUT_DIR)/%.c: $(BUILD_DIR)/% | dirs
	@echo "Analyzing Binary: $< ..."
	$(GHIDRA_HOME)/support/analyzeHeadless $(PWD)/$(GHIDRA_PRJ) MyGhidraProject -import $< -overwrite -scriptPath ghidra_scripts -postScript DumpDecompiled.java $@

clean:
	rm -rf $(BUILD_DIR) $(OUTPUT_DIR) $(GHIDRA_PRJ)

.PHONY: all clean dirs