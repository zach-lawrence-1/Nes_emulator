CXX = g++
CXXFLAGS = -std=c++17 -pedantic -Wall -Wextra -g

nes: cpu.h cpu.cpp bus.h bus.cpp main.cpp
	$(CXX) $(CXXFLAGS) -o nes cpu.h cpu.cpp bus.h bus.cpp main.cpp
