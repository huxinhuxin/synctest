CC = gcc
CXX = g++
CFLAG = -g -Wall
#LIBS  = -lm -lstdc++ 
EXCUTABLE_FILE = test_main

TEST_SUBDIR=./class2foder/src/
SOURCE=$(wildcard ./src/*cpp $(TEST_SUBDIR)*.cpp)
INCLUDE = -I ./class2foder/include -I ./include/

OBJECTS=$(patsubst %.cpp,%.o,$(SOURCE))
$(EXCUTABLE_FILE) : $(OBJECTS)
	$(CXX) $(INCLUDE) $(CFLAG) $^ -o $@ 
$(OBJECTS):%.o : %.cpp
	$(CXX) $(INCLUDE) -c $(CFLAG) $< -o $@ 

.PHONY:clean
clean:
	rm -rf $(OBJECTS) $(EXCUTABLE_FILE)
