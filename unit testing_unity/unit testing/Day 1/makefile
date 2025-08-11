my_program: main.o sum.o diff.o product.o division.o square.o ex.o
	gcc main.o sum.o diff.o product.o division.o square.o ex.o -o my_program

main.o: main.c demo.h
	gcc -c main.c

sum.o: sum.c demo.h
	gcc -c sum.c

# ...and so on for each file
my_program: main.o sum.o diff.o product.o division.o square.o
	gcc main.o sum.o diff.o product.o division.o square.o -o my_program

main.o: main.c demo.h
	gcc -c main.c
sum.o: sum.c demo.h
	gcc -c sum.c
diff.o: diff.c demo.h
	gcc -c diff.c
product.o: product.c demo.h
	gcc -c product.c
division.o: division.c demo.h
	gcc -c division.c
square.o: square.c demo.h
	gcc -c square.c

clean:
	rm -f *.o my_program