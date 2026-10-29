#include <stdio.h>
#define TAM_NOME 50


struct cliente{

char nome[TAM_NOME];

};

void imprimeNome(struct cliente c1){

	printf("Nome do cliente: %s", c1.nome);

}

int main(){

	struct cliente c1;

	printf("Digite seu nome:\n");
			while(TAM_NOME != '\0'){
				scanf("%s", c1.nome);
			}

	imprimeNome(c1);

return 0;
}
