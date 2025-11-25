# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -std=c11

# Target executable
TARGET = employee_system

# Source files
SOURCES = main.c employee.c

# Object files
OBJECTS = $(SOURCES:.c=.o)

# Default target
all: $(TARGET)

# Link object files to create executable
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS)
	@echo "Build successful! Run with: ./$(TARGET)"

# Compile source files to object files
%.o: %.c employee.h
	$(CC) $(CFLAGS) -c $< -o $@

# Clean build artifacts
clean:
	rm -f $(OBJECTS) $(TARGET) $(TARGET).exe employees.dat
	@echo "Clean complete!"

# Clean only object files
clean-obj:
	rm -f $(OBJECTS)
	@echo "Object files removed!"

# Run the program
run: $(TARGET)
	./$(TARGET)

# Help target
help:
	@echo "Available targets:"
	@echo "  all        - Build the project (default)"
	@echo "  clean      - Remove all build artifacts and data file"
	@echo "  clean-obj  - Remove only object files"
	@echo "  run        - Build and run the program"
	@echo "  help       - Display this help message"

.PHONY: all clean clean-obj run help
