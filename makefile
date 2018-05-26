CC = g++
CPPFLAGS = -Wall -g -std=c++11
OBJFILES = main.o LinkedList.o Node.o
TARGET = app

all: app

app: $(OBJFILES)
	$(CC) $(CPPFLAGS) $(OBJFILES) -o $(TARGET)

main.o: main.cpp 
	$(CC) $(CPPFLAGS) -c main.cpp

LinkedList.o: LinkedList.h
	$(CC) $(CPPFLAGS) -c LinkedList.cpp

Node.o: Node.h
	$(CC) $(CPPFLAGS) -c Node.cpp
	
.PHONY: clean
clean:
	rm -f *.o
	rm -f app