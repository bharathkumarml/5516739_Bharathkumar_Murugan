CC = gcc
CFLAGS = -Wall

OBJS = main.o sum.o diff.o product.o division.o modulo.o square.o ex.o unity.o

my_program: $(OBJS)
	$(CC) $(OBJS) -o my_program

main.o: main.c demo.h unity.h
	$(CC) $(CFLAGS) -c main.c

sum.o: sum.c demo.h
	$(CC) $(CFLAGS) -c sum.c

diff.o: diff.c demo.h
	$(CC) $(CFLAGS) -c diff.c

product.o: product.c demo.h
	$(CC) $(CFLAGS) -c product.c

division.o: division.c demo.h
	$(CC) $(CFLAGS) -c division.c

modulo.o: modulo.c demo.h
	$(CC) $(CFLAGS) -c modulo.c

square.o: square.c demo.h
	$(CC) $(CFLAGS) -c square.c

ex.o: ex.c demo.h
	$(CC) $(CFLAGS) -c ex.c

unity.o: unity.c unity.h
	$(CC) $(CFLAGS) -c unity.c

clean:
	rm -f *.o my_program
