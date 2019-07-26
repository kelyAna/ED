#include <stdio.h>
#include <stdlib.h>
#include "arquivo.h"


int main(){
	Pilha *p;
	
	int aux,escolha;

	
	do{
	printf("\n-------Menu inicial-------");
	printf("\n");
	printf("\n1 - Criar pilha");
	printf("\n2 - Inserir elemento");
	printf("\n3 - Remover elemento");
	printf("\n4 - Imprimir topo da pilha");
	printf("\n5 - Verificar se a pilha esta Cheia");
	printf("\n6 - Verificar se a pilha esta vazia");
	printf("\n7 - Encerrar");
	printf("\n");
	
	scanf("%d",&escolha);
	
	
	switch(escolha){
	  case 1:
        p = criar();
 		printf("Pilha criada com sucesso");
 	    break;
	  case 2:
 	    printf("Digite o valor a ser inserido na Pilha");
 		scanf("%d", &aux);
        inserir(p, aux);
	    break;
	  case 3:
  	    aux = remover(p);
	    printf("O valor removido foi %d", aux);
	   break;
	  case 4:
		imprimir(p);
	        break;
	  case 5:
	 	if(vazia(p)){
		 printf("A pilha está vazia");
	  }else{
		  printf("A pilha não está vazia");
		}
		break;
    case 6:
        if(cheia(p)){
		 printf("A pilha está cheia");
      }else{ printf("A pilha não está cheia");
        }
        break;
	  case 7:
        liberar(p);
		printf("Programa encerrado com sucesso");
		break;
      default: printf("Opção Inválida");
	}
	system("clear");
}
	
	while(escolha != 7);
	
	return 0;
}
