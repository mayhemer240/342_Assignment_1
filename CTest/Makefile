# Compiler
CC = gcc

#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
CFLAGS = -Wall 

# Source files
SRCS = src/main.c src/merge_sort.c src/quick_sort.c

# Output executable name
TARGET = program

# Rule to compile the program
$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS) 

# Clean rule to remove compiled files
clean:
	rm -f $(TARGET)