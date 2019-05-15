CC=g++
CFLAGS=-I.

make: main.cpp 
	$(CC) -o main main.cpp -lsfml-graphics -lsfml-window -lsfml-system
