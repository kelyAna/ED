#include <stdio.h>
#include "fila.h"

int main(){
  int opc;
  int seq_g=0, seq_p=0, cont_p=0;
  Fila *f_g = criar();
  Fila *f_p = criar();
  do{
	printf("\nDigite a opção desejada: \n 1- Atendimento geral \n2- Atendimento prioritário \n 3- Chamar próximo \n 4- sair");
    	scanf("%d", &opc);
	
	switch(opc){
	  case 1:
            if(!cheia(f_g)){
                seq_g++;
                inserir(f_g, seq_g);
                printf("Senha de atendimento: Geral-%d", seq_g);
            }else{
                printf("Fila geral cheia");
            }
            break;
      case 2:
            if(!cheia(f_p)){
                seq_p++;
                inserir(f_p, seq_p);
                printf("Senha de atendimento: Prioritária-%d", seq_p);
            }else{
                printf("Fila prioritária cheia");
            }
            break;
	  case 3:
            if(vazia(f_g) && vazia(f_p)) printf("As filas estão vazias");
            
            if((cont_p<3 && !vazia(f_p)) || (vazia(f_g) && !vazia(f_p))){
                printf("Prioritária-%d", remover(f_p));
                cont_p++;
            }else{
                if(!vazia(f_g)){
                    printf("Geral-%d", remover(f_g));
                    if(cont_p >= 3) cont_p=0;
                }
            }
            break;
	  case 4:
        	liberar(f_g);
            liberar(f_p);
            printf("Programa encerrado com sucesso");
            break;
      default: printf("Opção Inválida");
	}
  }while(opc != 4);
  return(0);
}
