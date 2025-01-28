#include <stdio.h>
#include <string.h>
#define LINE_HEIGHT 80

int main() {
	char texto[LINE_HEIGHT];
	int cont = 0;
	while(1) {
		int c = getchar();
		if (c != EOF) {
			texto[cont] = c;
			cont++;
			
			
		} else
			break;
	}
	
	printf("%s", texto);
	
	return 0;
}





/*
#define MAX_TEXT 10000

int main() {
	char texto[MAX_TEXT], temp[30];
	int line_height = 0, text_height = 0, cont = 0;
	printf("Entre com o texto: ");

	while(1) {
		int c = getchar();
		if (c != EOF) {
		(	if(sizeof(temp) != 0 && line_height == 0) {
				for(int i = sizeof(temp); i > 0; i--) {
					texto[text_height] = temp[i-1];
					text_height++;
				}
				cont = 0;
				temp[0] = '\0'; 
			} 
			texto[text_height] = c;
			line_height++;
			text_height++;
			if(line_height >= 20) {
				while(1) {
					if(texto[text_height] != ' ') {
						temp[cont] = c;
						texto[text_height] = ' ';
						cont++;
						text_height--;
						printf("temp: %c	texto: %c \n", temp[cont], texto[text_height]);
					} else 
						break;
				}
				texto[text_height++] = '\n'; 
				line_height = 0;
			} else
				continue;
		} else
			break; 
	}

	// printf("texto: %s \n", texto);
	printf("temp: %s", temp);
	return 0; 
}
*/
