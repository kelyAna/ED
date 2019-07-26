#include <stdio.h>
#include "fila.h"

int main(){
  int opc, valor, pos;
  Fila *f;
  do{
	printf("Digite a opção desejada: \n 1- Criar Fila \n 2- Inserir \n 3- Remover \n 4- Imprimir \n 5- Verificar se a Fila está vazia \n 6- Verificar se a fila está cheia \n 7-Furar fila \n 8-sair");
    	scanf("%d", &opc);
	
	switch(opc){
	  case 1:
             f = criar();
            printf("Fila criada com sucesso");
 	     break;
	  case 2:
 	    printf("Digite o valor a ser inserido na Fila");
 		scanf("%d", &valor);
        inserir(f, valor);
	     break;
	  case 3:
  	    valor = remover(f);
	    printf("O valor removido foi %d", valor);
	   break;
	  case 4:
		imprimir(f);
	        break;
	  case 5:
	 	if(vazia(f)) printf("A fila está vazia");
		else printf("A fila não está vazia");
		break;
    case 6:
        if(cheia(f)) printf("A fila está cheia");
        else printf("A fila não está cheia");
        break;
      case 7:
            printf("Digite a posição e o valor para furar a fila");
            scanf("%d%d", &pos, &valor);
            int r = furaFila(f, pos, valor);
            if(r) printf("Conseguiu furar a fila");
            else printf("Não conseguiu furar a fila");
        break;
	  case 8:
        liberar(f);
		printf("Programa encerrado com sucesso");
		break;
      default: printf("Opção Inválida");
	}
  }while(opc != 8);
  return(0);
}
