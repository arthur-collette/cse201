SRCS := $(wildcard *.cpp)
HEADERS := $(wildcard *.hpp)
OBJS := $(SRCS:.cpp=.o)


CXX = g++

ALL: testGeometry

%.o: %.cpp ${HEADERS}
	g++ -c -o $@ $<

testGeometry: ${OBJS} ${HEADERS}
	g++ -o testGeometry ${OBJS}

clean:
	rm -f ${OBJS} testGeometry
