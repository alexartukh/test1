box : main.o 
	gcc main.o -o box

main.o : main.c
	gcc -c main.c -o main.o

clean :
	rm *.o
	rm box
