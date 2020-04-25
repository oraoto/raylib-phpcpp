CPP             = g++
RM              = rm -f
CPP_FLAGS       = -Wall -c -O2 -std=c++11 -g

LD              = g++
LD_FLAGS        = -Wall -shared
RESULT          = raylib-phpcpp.so

SOURCES	        = $(wildcard *.cpp)
OBJECTS         = $(SOURCES:%.cpp=%.o)

all:	${OBJECTS} ${RESULT}

${RESULT}: ${OBJECTS}
		${LD} ${LD_FLAGS} -o $@ ${OBJECTS} -lphpcpp -lraylib

clean:
		${RM} *.obj *~* ${OBJECTS} ${RESULT}

${OBJECTS}:
		${CPP} ${CPP_FLAGS} -fpic -o $@ ${@:%.o=%.cpp}
