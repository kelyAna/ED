#include <stdio.h>
#include "pilha.h"

int main(){
  int opc, valor;
  Pilha *p;
  do{
	printf("Digite a opção desejada: \n 1- Criar Pilha \n 2- Inserir \n 3- Remover \n 4- Imprimir \n 5- Verificar se a Pilha está vazia \n 6- Verificar se a Pilha está cheia \n 7-sair");
    	scanf("%d", &opc);
	
	switch(opc){
	  case 1:
             p = criar_pilha();
            printf("Pilha criada com sucesso");
 	     break;
	  case 2:
 	    printf("Digite o valor a ser inserido na Pilha");
 		scanf("%d", &valor);
        inserir_pilha(p, valor);
	     break;
	  case 3:
  	    valor = remover_pilha(p);
	    printf("O valor removido foi %d", valor);
	   break;
	  case 4:
		imprimir_pilha(p);
	        break;
	  case 5:
	 	if(vazia_pilha(p)) printf("A pilha está vazia");
		else printf("A pilha não está vazia");
		break;
    case 6:
        if(cheia_pilha(p)) printf("A pilha está cheia");
        else printf("A pilha não está cheia");
        break;
	  case 7:
        liberar_pilha(p);
		printf("Programa encerrado com sucesso");
		break;
      default: printf("Opção Inválida");
	}
  }while(opc != 7);
  return(0);
}
