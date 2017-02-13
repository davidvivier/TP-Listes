tpListe: main.o liste.o
	gcc -o liste main.o liste.o

main.o : main.c
	gcc -c -Wall main.c

liste.o : liste.c
	gcc -c -Wall liste.c

clean:
	rm -rf *.o
	rm -rf liste
