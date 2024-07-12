CFLAGS=-Wall -g

all: ex19

ex19: ex19.o object.o
	$(CC) $(CFLAGS) -o ex19 ex19.o object.o

ex19.o: ex19.c
	$(CC) $(CFLAGS) -c ex19.c

object.o: object.c
	$(CC) $(CFLAGS) -c object.c

clean:
	rm -f ex19 ex19.o object.o
