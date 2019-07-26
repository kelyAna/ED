#include <stdio.h>
#include "arquivo.h"

int main(){
	
    int iguais = 1, escolha_U, aux;
    char sair;
    
    Pilha *p1;
    Pilha *p2;
    
    p1 = criar();
    p2 = criar();
    
    do{
        printf("\n- Em qual pilha você deseja inserir (1 ou 2)?");
        scanf("%d", &escolha_U);
        printf("- Digite o valor a ser inserido:");
        scanf("%d", &aux);
        if(escolha_U == 1){
		 inserir(p1, aux);
	    }
        else {
			inserir(p2, aux);
        }
        printf("- Deseja encerrar a leitura a inserção nas pilhas (S/N)?");
        scanf(" %c", &sair);
    }while(sair != 'S' && sair != 's');
    
    while(!vazia(p1) && !vazia(p2)){
        if(remover(p1) != remover(p2)) iguais =0;
    }
    
    if(iguais  && vazia(p1) && vazia(p2)) printf("As pilhas são iguais");
    else printf("- \nAs pilhas são diferentes");
    
    liberar(p1);
    liberar(p2);
    
    return(0);
}
