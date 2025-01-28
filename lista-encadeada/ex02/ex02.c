#include <stdio.h>
#include <stdlib.h>

typedef struct no {
	int valor;
	struct no *proximo;
} No;

typedef struct lista {
	int tam;
	No *inicio;
} Lista;

void lista_criar(Lista *lista) {
	lista->inicio = NULL;
	lista->tam = 0;
}

void lista_inserir_inicio(Lista *lista, int num) {
	No *novo = malloc(sizeof(No));
	
	if(novo) {
		novo->valor = num;
		novo->proximo = lista->inicio;
		lista->inicio = novo;	
		lista->tam++;
	} else
		printf("Erro ao alocar memoria.\n");
}

void lista_inserir_fim(Lista *lista, int num) {
	No *aux, *novo = malloc(sizeof(No));
	
	if(novo) {
		novo->valor = num;
		novo->proximo = NULL;
		
		if(lista->inicio == NULL)
			lista->inicio = novo;
		else {
			aux = lista->inicio;
			while(aux->proximo)
				aux = aux->proximo;
			aux->proximo = novo;
		}
		
		lista->tam++;
	} else
		printf("Erro ao alocar memoria.\n");
}

void lista_imprime(Lista lista) {
	No *no = lista.inicio;
	printf("\nLista tam %d: ", lista.tam);
	while(no) {
		printf("%d, ", no->valor);
		no = no->proximo;
	}
	printf("\n");
}

void lista_liberar(Lista *lista) {
	No *atual = lista->inicio;

	while (atual) {
		No *prox = atual->proximo;
		free(atual);
		atual = prox;
	}

	lista->inicio = NULL;
	lista->tam = 0;
}

int main() {

	int opcao,valor;
	Lista lista;
	
	lista_criar(&lista);

	   do{
        printf("\n\t0 - Sair\n\t1 - InserirI\n\t2 - inserirF\n\t3 - Imprimir\n");
        scanf("%d", &opcao);
        
        switch(opcao){
        case 1:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            lista_inserir_inicio(&lista, valor);
            break;
        case 2:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            lista_inserir_fim(&lista, valor);
            break;
        case 3:
            lista_imprime(lista);
            break;
        default:
            if(opcao != 0)
               printf("Opcao invalida!\n");
        }
    }while(opcao != 0);
    
   lista_liberar(&lista);

	return 0;
}
