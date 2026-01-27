# ==========================================
# 1. 설정 변수 정의
# ==========================================
CXX_gcc      = g++
CXX_clang    = clang++
STRIP        = strip
GHIDRA_HOME ?= tools/ghidra

SRC_DIR    = src
BUILD_DIR  = bin
OUTPUT_DIR = output
GHIDRA_PRJ = ghidra-project

# 소스 파일 목록
SRCS      = $(wildcard $(SRC_DIR)/*.cpp)
BASENAMES = $(patsubst $(SRC_DIR)/%.cpp, %, $(SRCS))

# 매트릭스 설정
COMPILERS  = clang
OPT_LEVELS = 0 1 2 3 s
TYPES      = normal stripped

# ==========================================
# 2. 타겟 리스트 생성
# ==========================================
# 최종 목표인 .c 파일들의 전체 경로 리스트
ALL_OUTS = $(foreach comp, $(COMPILERS), \
             $(foreach type, $(TYPES), \
               $(foreach opt, $(OPT_LEVELS), \
                 $(foreach base, $(BASENAMES), \
                   $(OUTPUT_DIR)/$(comp)/$(type)/O$(opt)/$(base).c))))

# 기본 타겟
all: $(ALL_OUTS)

# ★ 핵심 수정: 이 설정이 있어야 bin 폴더의 파일들이 삭제되지 않음 ★
.SECONDARY:

# ==========================================
# 3. 디렉토리 생성
# ==========================================
# 중복 실행을 막기 위해 | (order-only) 의존성으로 사용될 타겟
dirs:
	@mkdir -p $(GHIDRA_PRJ)
	@$(foreach comp, $(COMPILERS), \
	  $(foreach type, $(TYPES), \
	    $(foreach opt, $(OPT_LEVELS), \
	      mkdir -p $(BUILD_DIR)/$(comp)/$(type)/O$(opt); \
	      mkdir -p $(OUTPUT_DIR)/$(comp)/$(type)/O$(opt); \
	    )))

# ==========================================
# 4. 동적 빌드 규칙 (Eval & Template)
# ==========================================

# 템플릿: 컴파일러(1), 타입(2), 최적화(3)에 따른 규칙 생성
define COMPILE_TEMPLATE

# 타겟: bin/컴파일러/타입/옵션/파일명
$(BUILD_DIR)/$(1)/$(2)/O$(3)/%: $(SRC_DIR)/%.cpp | dirs
	@echo "[Build] Compiling $(1) ($(2)) O$(3) : $$<"
	$(if $(filter normal,$(2)), \
		$(CXX_$(1)) -std=c++03 -O$(3) -g $$< -o $$@, \
		$(CXX_$(1)) -std=c++03 -O$(3) -g $$< -o $$@ && $(STRIP) --strip-all $$@ \
	)

endef

# 모든 조합에 대해 규칙 생성 (중복 호출 없이 깔끔하게 순회)
$(foreach comp, $(COMPILERS), \
  $(foreach type, $(TYPES), \
    $(foreach opt, $(OPT_LEVELS), \
      $(eval $(call COMPILE_TEMPLATE,$(comp),$(type),$(opt))) \
    ) \
  ) \
)

# ==========================================
# 5. Ghidra 분석 규칙
# ==========================================

# output/A/B/C/file.c 는 bin/A/B/C/file 에 의존함
$(OUTPUT_DIR)/%.c: $(BUILD_DIR)/%
	@echo "[Ghidra] Analyzing: $<"
	$(GHIDRA_HOME)/support/analyzeHeadless $(PWD)/$(GHIDRA_PRJ) MyGhidraProject \
		-import $< -overwrite \
		-scriptPath ghidra_scripts \
		-postScript DumpDecompiled.java $@

# ==========================================
# 6. 클린업
# ==========================================
clean:
	rm -rf $(BUILD_DIR) $(OUTPUT_DIR) $(GHIDRA_PRJ)

.PHONY: all clean dirs