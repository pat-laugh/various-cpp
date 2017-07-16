OPTIONS = -std=c++11 -Wall -Wextra -Wno-missing-field-initializers -I ..
CPP_FILES = $(wildcard *.cpp)
OBJ_FILES = $(notdir $(CPP_FILES:.cpp=.o))
EXEC = tests.out

all: lib $(EXEC)

lib:
	cd ..; make -s

$(EXEC): $(OBJ_FILES)
	$(CXX) -o $@ $^ -L.. -lvarious

%.o: %.cpp
	$(CXX) $(OPTIONS) -o $@ -c $<

clean:
	rm -rf $(EXEC) *.o

clean-lib:
	cd ..; make clean -s

full-clean: clean clean-lib

reset: clean all

full-reset: full-clean all

test:
	make all -s && ./$(EXEC)