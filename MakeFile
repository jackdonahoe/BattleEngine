CXX = g++
CXXFLAGS = -Wall -std=c++17

TARGET = game
SRC = src/main.cpp src/Fighter.cpp src/Battle.cpp
OBJ = $(SRC:.cpp=.o)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

src/%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f src/*.o $(TARGET)

