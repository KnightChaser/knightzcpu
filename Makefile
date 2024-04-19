CC=g++
CFLAGS=-Iinclude -std=c++11 -g
SOURCE=src/main.cpp src/cpu.cpp
EXECUTABLE=knightzcpu.out

all: knightzcpu

knightzcpu: $(SOURCE)
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(SOURCE)

clean:
	rm -f $(EXECUTABLE)