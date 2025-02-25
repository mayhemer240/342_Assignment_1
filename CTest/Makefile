
<<<<<<< HEAD
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


# Release build with user input (only program output is written to the file)
release: $(BUILD_DIR)/$(TARGET)
	@mkdir -p $(BUILD_DIR)/$(OUTPUT_DIR)
	@read -p "Enter output file number: " FILE_NUM; \
	FILE_NAME="output_c_$$FILE_NUM.txt"; \
	OUTPUT_FILE="$(BUILD_DIR)/$(OUTPUT_DIR)/$$FILE_NAME"; \
	echo ""; \
	echo "============================="; \
	echo " SHOWING RESULTS FROM FILE: $$FILE_NAME "; \
	echo "============================="; \
	./$(BUILD_DIR)/$(TARGET) > $$OUTPUT_FILE; \
	cat $$OUTPUT_FILE; \
	echo ""; \
	echo "=============================\n\n\n\n"; \
	echo ""


	


# Clean rule to remove compiled files
clean:
	rm -rf $(BUILD_DIR)
=======
>>>>>>> 3e90de7d022f5f4e28c8b390ce3011f38aff7e11
