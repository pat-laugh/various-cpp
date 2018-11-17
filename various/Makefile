# Copyright 2017-2018 Patrick Laughrea
# Licensed under the Apache License, Version 2.0

IS_MAC = $$(test "$$(uname -s)" = 'Darwin' && echo 1 || echo 0)
DYNAMIC_OPT = $$(test $(IS_MAC) -eq 1 && echo '-dynamiclib' || echo '-shared')

OPTIONS = -std=c++11 -Wall -Wextra -Wno-missing-field-initializers
STATIC_LIBRARY = libvarious.a
SHARED_LIBRARY = libvarious.so
CPP_FILES = $(wildcard *.cpp)
OBJ_FILES = $(notdir $(CPP_FILES:.cpp=.o))

all: $(STATIC_LIBRARY) $(SHARED_LIBRARY)

$(STATIC_LIBRARY): $(OBJ_FILES)
	ar -rcs $@ $^

$(SHARED_LIBRARY): $(STATIC_LIBRARY)
	$(CXX) -o $@ $(DYNAMIC_OPT) -Wl,-all_load $(STATIC_LIBRARY)

%.o: %.cpp
	$(CXX) $(OPTIONS) -o $@ -c $<

clean:
	rm -rf $(STATIC_LIBRARY) $(SHARED_LIBRARY) *.o

debug: OPTIONS += -DNDEBUG -g3
debug: all

op: OPTIONS += -O3 -DNDEBUG
op: all