CC=g++
CFLAGS=-std=c++11 -g -Wall 

all: setExample mapExample adventure

setExample: setExample.cpp
	$(CC) $(CFLAGS) -o setExample setExample.cpp

mapExample: mapExample.cpp
	$(CC) $(CFLAGS) -o mapExample mapExample.cpp

adventure: adventure.cpp
	$(CC) $(CFLAGS) -o adventure adventure.cpp

clean:
	rm setExample mapExample adventure