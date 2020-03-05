CC = gcc

CFLAGS = -Wall -pedantic

LD = gcc

LDFLAGS = 

catty: main.o
	$(LD) $(LDFLAGS) -o catty main.o

main.o: main.c
	$(CC) $(CFLAGS) -c -o main.o main.c

clean:
	rm -rf ./*.o ./catty

#test: myprog
#	echo Testing myprog
#	./myprog < inputfile
#	echo done.

#shoutout to PLN for providing original makefile which I copied it from
