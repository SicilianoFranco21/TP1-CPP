CXX = g++
CXXFLAGS = -Wall -Werror -Wconversion
NAME = inventarioDeJames.exe

all:
	${CXX} -o ${NAME} *.cpp ${CXXFLAGS}

noFlags:
	${CXX} -o ${NAME} *.cpp

clean:
	rm *.o

cleanAll:
	rm -f ${NAME} *.o
