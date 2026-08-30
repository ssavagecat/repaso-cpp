CXX      = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -g
OBJ      = main.o punto.o
 
programa: $(OBJ)
	$(CXX) $(OBJ) -o programa
 
main.o: main.cpp punto.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp
 
punto.o: punto.cpp punto.hpp
	$(CXX) $(CXXFLAGS) -c punto.cpp
 
clean:
	rm -f $(OBJ) programa