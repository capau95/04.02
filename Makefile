HEADERS = vergleich.h

all: vergleichmain vergleich

vergleichmain.o: vergleichmain.c
	gcc -c vergleichmain.c -o vergleichmain.o

vergleich.o: vergleich.c
	gcc -c vergleich.c -o vergleich.o

vergleichmain: vergleichmain.o vergleich.o
	gcc vergleichmain.o vergleich.o -o vergleichmain

clean: 
	-rm -f vergleichmain.o	
	-rm -f vergleich.o
	-rm -f vergleichmain
