all : cliente

cliente: cliente_conjunto.o conjunto.o
	gcc cliente_conjunto.o conjunto.o -g -lm -o cliente
	
cliente_conjunto.o: cliente_conjunto.c conjunto.h
	gcc -std=c99 -Wall -Werror -Wvla -g -c cliente_conjunto.c
	
conjunto.o: conjunto.c conjunto.h
	gcc -std=c99 -Wall -Werror -Wvla -g -c conjunto.c
	
clean:
	rm -rf *.o ./cliente
	
run:
	./cliente
