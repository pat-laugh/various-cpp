# Copyright 2017 Patrick Laughrea
# Licensed under the Apache License, Version 2.0

OPTIONS = -std=c++11 -Wall -Wextra -Wno-missing-field-initializers
LIBRARY = libvarious.a
CPP_FILES = $(wildcard *.cpp)
OBJ_FILES = $(notdir $(CPP_FILES:.cpp=.o))

all: $(LIBRARY)

$(LIBRARY): $(OBJ_FILES)
	ar -rcs $@ $^

%.o: %.cpp
	$(CXX) $(OPTIONS) -o $@ -c $<

clean:
	rm -rf $(LIBRARY) *.o

debug: OPTIONS += -DNDEBUG -g3
debug: all