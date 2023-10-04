all: main

brazo.o: brazo.cpp brazo.h
	g++ -c brazo.cpp

main.o: main.cpp brazo.h
	g++ -c main.cpp

main: main.o brazo.o
	g++ -o main main.o brazo.o

clean: 
	rm -f *.o main

test: all
	./main
