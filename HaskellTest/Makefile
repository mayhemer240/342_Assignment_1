# Define directories
OUTPUT_DIR = output
TARGET = HaskellTest

# Ensure output directory exists
init:
	@mkdir -p $(OUTPUT_DIR)

# Debug rule - Compile and show last 10 lines of output
debug: init
	@echo ""; \
	echo "====================================="; \
	echo " Running $(TARGET)..."; \
	echo "====================================="; \
	cabal run $(TARGET) | tail -n 10; \
	echo "====================================="; \


# Release build with automatic numbering
release: init
	@i=1; \
	while [ -f "$(OUTPUT_DIR)/output_hs_$$i.txt" ]; do \
		i=$$((i+1)); \
	done; \
	FILE_NAME="output_hs_$$i.txt"; \
	OUTPUT_FILE="$(OUTPUT_DIR)/$$FILE_NAME"; \
	cabal run $(TARGET) > "$$OUTPUT_FILE"; \
	echo " Output saved.\n File: $$FILE_NAME"; \
	echo "\n"
	
# Combined Debug + Release rule
all: debug release

# Clean output directory
clean:
	@rm -rf $(OUTPUT_DIR)/*.txt

