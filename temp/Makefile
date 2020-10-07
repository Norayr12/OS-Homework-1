all: main

main: main.o complex.o
	g++ main.o complex.o -o main

main.o: Main.cpp Header.h
	g++ -c Main.cpp -o main.o

complex.o: Complex.cpp
	g++ -c Complex.cpp -o complex.o

clean:
	rm *.o main
