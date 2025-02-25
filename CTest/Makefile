
# COmpiler flags
CFLAGS = -Wall 

#directories
BUILD_DIR = build
OUTPUT_DIR = results

# Source files
SRCS = src/main.c src/merge_sort.c src/quick_sort.c

# Output executable name (stored in build/)
TARGET = program

# Rule to compile the program
$(BUILD_DIR)/$(TARGET): $(SRCS)
	@mkdir -p $(BUILD_DIR)  # Ensure build directory exists
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/$(TARGET) $(SRCS) 

# Run without redirecting output (last 10 lines)
# Run without redirecting output (last 10 lines)
debug: $(BUILD_DIR)/$(TARGET)
	@echo ""
	@echo "============================="
	@echo " OUTPUT FROM PROGRAM: "
	@echo "============================="
	@echo ""
	@$(BUILD_DIR)/$(TARGET) | tail -n 10
	@echo ""
	@echo "=============================\n\n\n\n"
	@echo ""


# Release build with automatic numbering
test: $(BUILD_DIR)/$(TARGET)
	@mkdir -p $(BUILD_DIR)/$(OUTPUT_DIR)
	@i=1; \
	while [ -f "$(BUILD_DIR)/$(OUTPUT_DIR)/output_c_$$i.txt" ]; do \
		i=$$((i+1)); \
	done; \
	FILE_NAME="output_c_$$i.txt"; \
	OUTPUT_FILE="$(BUILD_DIR)/$(OUTPUT_DIR)/$$FILE_NAME"; \
	echo ""; \
	echo "====================================="; \
	echo " Running $(BUILD_DIR)/$(TARGET)..."; \
	./$(BUILD_DIR)/$(TARGET) > $$OUTPUT_FILE; \
	echo " Output saved to $$OUTPUT_FILE"; \
	echo "====================================="; \
	echo ""; \
	cat $$OUTPUT_FILE; \
	echo "\n\n"

# Clean rule to remove compiled files
clean:
	rm -rf $(BUILD_DIR)
