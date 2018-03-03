CXX = g++
# CXX = clang++

CXXFLAGS = -Wall -Wno-uninitialized

BINARIES= strFuncsTest \

all: ${BINARIES}

tests: ${BINARIES}
	./strFuncsTest




COMMON_OBJECT_FILES = strFuncs.o tddFuncs.o

strFuncsTest: strFuncsTest.o ${COMMON_OBJECT_FILES}
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@
	
clean:
	/bin/rm -f ${BINARIES} *.o