# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

# Raylib and system libraries
# -lm       -> libm     | Math functions
# -ldl      -> libdl    | Dynamic library loading
# -lpthread -> pthreads | Multithreading support
# -lGL      -> OpenGL   | Graphis rendering

LIBS = -lraylib -lm -ldl -lpthread -lGL

# Source and output 
SRC = src/main.cpp
OUT = game

all:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(OUT) $(LIBS)

clean:
	rm -f $(OUT)
