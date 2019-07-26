#include <stdio.h>
#include "arquivo.h"


int main(){
	Pilha *p;
	int valor;
	int resto = 0;
	char sair;
	
	p = criar();
	
    printf("Digite o valor a ser inserido: ");
    scanf("%d", &valor);

        
     while(valor > 0){
		resto = valor%2;
		
		inserir(p,resto);
		
		valor = valor/2;
	}
	
	do{
		imprimir(p);
		remover(p);
		
	    printf("Deseja encerrar a leitura a inserção nas pilhas (S/N)?");
        scanf(" %c", &sair);
    }while(sair != 'S' && sair != 's');
	
	
	
	return 0;
}
