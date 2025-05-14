# Compilador utilizado
CC=gcc

# Flags de compilação
CFLAGS=-Wall -g -I.

all: main

main: main.o Hash.o CuckooHashTable/Cuckoo.o LinkedListHashTable/LinkedList.o OpenAddressingHashTable/OpenAddressing.o
	$(CC) $(CFLAGS) -o main main.o Hash.o CuckooHashTable/Cuckoo.o LinkedListHashTable/LinkedList.o OpenAddressingHashTable/OpenAddressing.o

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

Hash.o: Hash.c
	$(CC) $(CFLAGS) -c Hash.c
	
CuckooHashTable/Cuckoo.o: CuckooHashTable/Cuckoo.c
	$(CC) $(CFLAGS) -c CuckooHashTable/Cuckoo.c -o CuckooHashTable/Cuckoo.o

LinkedListHashTable/LinkedList.o: LinkedListHashTable/LinkedList.c
	$(CC) $(CFLAGS) -c LinkedListHashTable/LinkedList.c -o LinkedListHashTable/LinkedList.o

OpenAddressingHashTable/OpenAddressing.o: OpenAddressingHashTable/OpenAddressing.c
	$(CC) $(CFLAGS) -c OpenAddressingHashTable/OpenAddressing.c -o OpenAddressingHashTable/OpenAddressing.o

clean:
	rm -f *.o main CuckooHashTable/*.o LinkedListHashTable/*.o OpenAddressingHashTable/*.o
