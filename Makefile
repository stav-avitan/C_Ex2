CC=gcc
AR = ar
FLAFS = -Wall -g

all: connections libmy_mat.a

connections: main.o libmy_mat.a
	$(CC) $(FLAGS) -o main.o libmy_mat.a -o connections

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c

libmy_mat.a: my_mat.o
	$(AR) -rcs libmy_mat.a my_mat.o

.PHONY: clean
clean:
	rm -f *.o *.a connections