# Compiler
CC = gcc

#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
CFLAGS = -Wall 

# Source files
SRCS = src/main.c src/merge_sort.c src/quick_sort.c

# Output files directory
OUTPUT_DIR = build/output
# Output executable name
TARGET = build/program


# Rule to compile the program
$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS)

# Run without redirecting output
debug: $(TARGET)
	@echo "\nC Test Program Output (Last 10 lines): \n"
	@./$(TARGET) | tail -n 10

# Release build
release: $(TARGET)
	@./$(TARGET) > build/output/output_c_1.txt
	@cat build/output/output_c_1.txt
	
# Run and redirect output to a file (timestamped)
update_instructions: $(TARGET)
	@./$(TARGET) > build/output/output_c_2.txt
	@cat build/output/output_c_2.txt

update_requirements: $(TARGET)
	@./$(TARGET) > build/output/output_c_3.txt
	@cat build/output/output_c_3.txt

# Clean rule to remove compiled files
clean:
	@rm -f $(TARGET) $(OUTPUT_DIR)*.txt
