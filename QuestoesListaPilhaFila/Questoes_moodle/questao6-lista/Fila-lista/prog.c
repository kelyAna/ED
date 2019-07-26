#include <stdio.h>
#include "fila.h"

int main(){
  int opc, valor;
  Fila *f;
  do{
	printf("Digite a opção desejada: \n 1- Criar Fila \n 2- Inserir \n 3- Remover \n 4- Imprimir \n 5- Verificar se a Fila está vazia \n 6- Verificar se a Fila está cheia \n 7-sair");
    	scanf("%d", &opc);
	
	switch(opc){
	  case 1:
             f = criar_fila();
            printf("Pilha criada com sucesso");
 	     break;
	  case 2:
 	    printf("Digite o valor a ser inserido na Fila");
 		scanf("%d", &valor);
        inserir_fila(f, valor);
	     break;
	  case 3:
  	    valor = remover_fila(f);
	    printf("O valor removido foi %d", valor);
	   break;
	  case 4:
		imprimir_fila(f);
	        break;
	  case 5:
	 	if(vazia_fila(f)) printf("A fila está vazia");
		else printf("A fila não está vazia");
		break;
    case 6:
        if(cheia_fila(f)) printf("A fila está cheia");
        else printf("A fila não está cheia");
        break;
	  case 7:
        liberar_fila(f);
		printf("Programa encerrado com sucesso");
		break;
      default: printf("Opção Inválida");
	}
  }while(opc != 7);
  return(0);
}
