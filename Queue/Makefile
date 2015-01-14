EXENAME = queue

CXX = clang++
CXXFLAGS = -std=c++1y -stdlib=libc++ -c -g -O0 -Wall -Wextra -pedantic
LD = clang++
LDFLAGS = -std=c++1y -stdlib=libc++ -lpng -lc++abi

$(EXENAME) : main.o queue.o
	$(LD) main.o queue.o $(LDFLAGS) -o $(EXENAME)

queue.o : queue.h queue.cpp
	$(CXX) $(CXXFLAGS) queue.cpp

main.o : main.cpp queue.h queue.cpp
	$(CXX) $(CXXFLAGS) main.cpp

