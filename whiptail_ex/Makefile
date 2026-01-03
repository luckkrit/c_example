# Variables
CXX = g++
CXXFLAGS = -Wall -Wextra -g
LIBS = -lncurses
TARGET = main
SRC = main.cpp

# Default rule
all: $(TARGET)

# Link the executable
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET) $(LIBS)

# Clean up build files
clean:
	rm -f $(TARGET)

# Run the program
run: all
	./$(TARGET)