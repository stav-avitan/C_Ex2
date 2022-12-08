CC=gcc
AR = ar
FLAGS = -Wall -g

all: connections libmy_mat.a

connections: main.o libmy_mat.a
	$(CC) $(FLAGS) main.o libmy_mat.a -o connections

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c

libmy_mat.a: my_mat.o
	$(AR) -rcs libmy_mat.a my_mat.o

.PHONY: clean all
clean:
	rm -f *.o *.a connections
