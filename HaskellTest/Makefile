# Define directories
OUTPUT_DIR = output
TARGET = HaskellTest

# Ensure output directory exists
init:
	@mkdir -p $(OUTPUT_DIR)

# Find the next available output file and run the program
run: init
	@i=1; \
	while [ -f "$(OUTPUT_DIR)/output_hs_$$i.txt" ]; do \
		i=$$((i+1)); \
	done; \
	echo " Running $(TARGET)..."; \
	cabal run $(TARGET) > "$(OUTPUT_DIR)/output_hs_$$i.txt"; \
	echo " Output saved to $(OUTPUT_DIR)/output_hs_$$i.txt\n"; \
	echo "==================================="; \
	tail -n 10 "$(OUTPUT_DIR)/output_hs_$$i.txt"; \
	echo "===================================\n\n\n\n"

# Clean output directory
clean:
	rm -rf $(OUTPUT_DIR)/*.txt
