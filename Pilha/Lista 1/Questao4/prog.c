#include <stdio.h>
#include "arquivo.h"
#include <time.h>
#include <stdlib.h>

int main(){
	int  valor, num, i = 0;
	
	
	Pilha *jogador1 = criar();
	Pilha *jogador2 = criar(); 
	
	Pilha *aux1 = criar();
	Pilha *aux2 = criar();

	 while(!cheia(jogador1) && !cheia(jogador2)){
		printf("Digite o valor [%d] do jogador 1: ", i);
        scanf("%d", &valor);
        inserir(jogador1, valor); 
		 
		printf("Digite o valor [%d] do jogador 2: ", i); 
		scanf("%d", &valor);
		inserir(jogador2,valor);
	
		i++;
	 }
 
	//invertendo pilhas
	while(!vazia(jogador1)  &&  !vazia(jogador2)){
			inserir(aux1, remover(jogador1)); 
		    inserir(aux2, remover(jogador2));
	}	
	
	srand(time(NULL));
		
	num = 1 + rand()%10;
	printf("\n O numero gerado foi %d:    ", num);
		
	
	 while(!vazia(jogador1) && !vazia(jogador2)){
		valor = remover(aux1);
		printf("\nJogador 1: %d", valor);
		if(valor == num) printf("-------O jogador 1 ganhou!");
		
		valor = remover(aux2);
		printf("\nJogador 1: %d", valor);
		if(valor == num ) printf("-----O jogador 2 ganhou!");		
		}
		
		
     liberar(jogador1);
     liberar(jogador2);
     liberar(aux1);
     liberar(aux2);
	
	return 0;
}

