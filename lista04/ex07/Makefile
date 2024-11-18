all : cliente

cliente: cliente_matriz.o matriz.o
	gcc cliente_matriz.o matriz.o -g -lm -o cliente
	
cliente_matriz.o: cliente_matriz.c matriz.h
	gcc -std=c99 -Wall -Werror -Wvla -g -c cliente_matriz.c
	
matriz.o: matriz.c matriz.h
	gcc -std=c99 -Wall -Werror -Wvla -g -c matriz.c
	
clean:
	rm -rf *.o ./cliente
	
run:
	./cliente
