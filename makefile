CC=g++
CFLAGS=-std=c++11
all:DoubleList main
	$(CC) $(CFLAGS) DoubleList.o main.o -o out
DoubleList:DoubleList.cpp
	$(CC) $(CFLAGS) -c DoubleList.cpp
main:main.cpp
	$(CC) $(CFLAGS) -c main.cpp
clean:
	rm *.o out
