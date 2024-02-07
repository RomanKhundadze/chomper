CXX := g++
OUTPUT := debugGame.app

CXX_FLAGS := -Og
INCLUDES := -I ./src
LDFLAGS := -Og -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

SRC_FILES := $(wildcard src/*.cpp)
OBJ_FILES := $(SRC_FILES:.cpp=.o)

all:$(OUTPUT)

$(OUTPUT):$(OBJ_FILES)
	$(CXX) $(OBJ_FILES) $(LDFLAGS) -o ./bin/$@

%.o: %.cpp
	$(CXX) -c $(CXX_FLAGS) $(INCLUDES) $< -o $@

clean:
	rm -rf $(OBJ_FILES) ./bin/$(OUTPUT)

run:$(OUTPUT)
	cd bin && ./$(OUTPUT) && cd ..
