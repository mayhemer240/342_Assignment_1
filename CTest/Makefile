# Makefile for C program

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


debug: $(BUILD_DIR)/$(TARGET)
	@echo ""
	@echo "============================="
	@echo " Running C program...: "
	@echo "============================="
	@$(BUILD_DIR)/$(TARGET) | tail -n 10
	@echo "=============================\n"


# Release build with automatic numbering
release: $(BUILD_DIR)/$(TARGET)
	@mkdir -p $(BUILD_DIR)/$(OUTPUT_DIR)
	@i=1; \
	while [ -f "$(BUILD_DIR)/$(OUTPUT_DIR)/output_c_$$i.txt" ]; do \
		i=$$((i+1)); \
	done; \
	FILE_NAME="output_c_$$i.txt"; \
	OUTPUT_FILE="$(BUILD_DIR)/$(OUTPUT_DIR)/$$FILE_NAME"; \
	./$(BUILD_DIR)/$(TARGET) > $$OUTPUT_FILE; \
	echo " Output saved to file."; \
	echo " File: $$OUTPUT_FILE"; \
	echo "\n"

all: debug release
# Clean rule to remove compiled files
clean:
	rm -rf $(BUILD_DIR)
