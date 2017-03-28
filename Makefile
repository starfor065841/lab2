main: class.o main.o
	g++ -lm -o main main.o class.o
class.o: class.cpp class.h
	g++ -lm -c class.cpp
main.o: main.cpp class.h
	g++ -lm -c main.cpp

