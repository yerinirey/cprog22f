program: select.o list.o main.o 
	gcc -o program select.o list.o main.o

select.o: select.c
	gcc -c -o select.o select.c

list.o: list.c
	gcc -c -o list.o list.c
	
main.o: main.c
	gcc -c -o main.o main.c

clean:
	rm *.o program