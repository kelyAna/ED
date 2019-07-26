#include <stdio.h>
#include "arquivo.h"

int main(){
    int valor;
    int aux1, cont = 0;
    
    Pilha *p1;
    Pilha *aux;
    
    p1 = criar();
    aux = criar();
    
       printf("\n Digite o valor a ser inserido :   ");
       scanf("%d", &valor);
    
    while(valor>0){
        aux1 = valor % 10;
        inserir(p1, aux1);
        valor = valor/10;
        cont++;
	}
    
     int i = 0;
      
     while(i<cont){
        inserir(aux, remover(p1));
        i++;
    }
    
    while(cont > 0){
	    valor = valor + remover(aux);
	    if(cont!=1){
			valor = valor*10;
		}
		cont--;
    }
		
    printf("O numero anterior eh:  %d", valor);
    return(0);
}
