#include <stdio.h>
#include <stdlib.h>

typedef struct lista {
	int valor;
	struct lista *proximo;
} Lista;

void add_no_lista_inicio(Lista **lista, int num) {
	Lista *novo = malloc(sizeof(Lista));
	
	if(novo) {
		novo->valor = num;
		novo->proximo = *lista;
		*lista = novo;
	} else {	
		printf("Memoria mal alocada.\n");
	}
}

void add_no_lista_fim(Lista **lista, int num) {
	Lista *aux, *novo = malloc(sizeof(Lista));
	
	if(novo) {
		novo->valor = num;
		novo->proximo = NULL;
		
		if(*lista == NULL)
			*lista = novo;
		else {
			aux = *lista;
			while(aux->proximo)
				aux = aux->proximo;
			aux->proximo = novo;
		}
	} else {
		printf("Memoria mal alocada.\n");
	}
}

void imprime_lista(Lista *lista) {
	printf("Lista: ");
	while(lista) {
		printf("%d, ", lista->valor);
		lista = lista->proximo;
	}
	printf("\n\n");
}

int main() {

	int opcao,valor;
	Lista *lista = NULL;

	   do{
        printf("\n\t0 - Sair\n\t1 - InserirI\n\t2 - inserirF\n\t3 - Imprimir\n");
        scanf("%d", &opcao);
        
        switch(opcao){
        case 1:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            add_no_lista_inicio(&lista, valor);
            break;
        case 2:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            add_no_lista_fim(&lista, valor);
            break;
        case 3:
            imprime_lista(lista);
            break;
        default:
            if(opcao != 0)
               printf("Opcao invalida!\n");
        }
    }while(opcao != 0);
    
    free(lista);

	return 0;
}
