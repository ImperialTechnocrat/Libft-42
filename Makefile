# Directories
SRC_DIR = src
TEST_DIR = tests

# Compiler and flags
CC = gcc
CFLAGS = -I$(SRC_DIR)  # This tells GCC to look for header files in the src directory

# Source files
SRC_FILES = $(SRC_DIR)/ft_isalpha.c
TEST_FILES = $(TEST_DIR)/is_alpha.c

# Object files
SRC_OBJS = $(SRC_FILES:.c=.o)
TEST_OBJS = $(TEST_FILES:.c=.o)

# Target executable
TARGET = $(TEST_DIR)/test_is_alpha

# Default target
all: $(TARGET)

# Compile
$(TARGET): $(SRC_OBJS) $(TEST_OBJS)
	$(CC) -o $(TARGET) $(SRC_OBJS) $(TEST_OBJS)

# Compile source files
$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Compile test files
$(TEST_DIR)/%.o: $(TEST_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean
clean:
	rm -f $(SRC_OBJS) $(TEST_OBJS) $(TARGET)

# Run tests
run: $(TARGET)
	./$(TARGET)

.PHONY: all clean run

