# 컴파일러 및 도구 설정
CXX      = g++
CXXFLAGS = -std=c++03 -O0
STRIP    = strip

SRC_DIR    = src
BUILD_DIR  = bin
OUTPUT_DIR = output
GHIDRA_PRJ = ghidra-project
GHIDRA_HOME ?= tools/ghidra

# 소스 파일 및 타겟 설정
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
# 1. 정보가 있는 버전 (Normal)
NORMAL_BINS = $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/normal/%, $(SRCS))
NORMAL_OUTS = $(patsubst $(SRC_DIR)/%.cpp, $(OUTPUT_DIR)/normal/%.c, $(SRCS))
# 2. 정보가 없는 버전 (Stripped)
STRIP_BINS  = $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/stripped/%, $(SRCS))
STRIP_OUTS  = $(patsubst $(SRC_DIR)/%.cpp, $(OUTPUT_DIR)/stripped/%.c, $(SRCS))

# 전체 실행 타겟
all: $(NORMAL_OUTS) $(STRIP_OUTS)

# 디렉터리 생성 전용 타겟
dirs:
	mkdir -p $(BUILD_DIR)/normal $(BUILD_DIR)/stripped $(OUTPUT_DIR)/normal $(OUTPUT_DIR)/stripped $(GHIDRA_PRJ)

# --- 빌드 규칙 ---
.PRECIOUS: $(BUILD_DIR)/normal/% $(BUILD_DIR)/stripped/%
# Normal 빌드 (디버깅 정보 포함)
$(BUILD_DIR)/normal/%: $(SRC_DIR)/%.cpp | dirs
	$(CXX) $(CXXFLAGS) -g $< -o $@

# Stripped 빌드 (디버깅 정보 제외 + 모든 심볼 제거)
$(BUILD_DIR)/stripped/%: $(SRC_DIR)/%.cpp | dirs
	$(CXX) $(CXXFLAGS) $< -o $@
	$(STRIP) --strip-all $@

# --- Ghidra 분석 규칙 ---

# Normal 분석
$(OUTPUT_DIR)/normal/%.c: $(BUILD_DIR)/normal/% | dirs
	@echo "Analyzing Normal Binary: $< ..."
	$(GHIDRA_HOME)/support/analyzeHeadless $(PWD)/$(GHIDRA_PRJ) MyGhidraProject -import $< -overwrite -scriptPath ghidra_scripts -postScript DumpDecompiled.java $@

# Stripped 분석
$(OUTPUT_DIR)/stripped/%.c: $(BUILD_DIR)/stripped/% | dirs
	@echo "Analyzing Stripped Binary: $< ..."
	$(GHIDRA_HOME)/support/analyzeHeadless $(PWD)/$(GHIDRA_PRJ) MyGhidraProject -import $< -overwrite -scriptPath ghidra_scripts -postScript DumpDecompiled.java $@

clean:
	rm -rf $(BUILD_DIR) $(OUTPUT_DIR) $(GHIDRA_PRJ)

.PHONY: all clean dirs