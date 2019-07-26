#include <stdio.h>
#include "arquivo.h"
#include <string.h>

typedef struct peca{
	char nome[12];
	int prioridade;
	char situacao;
	
}Peca;

int main(){
	
	Pilha *v;
	Pilha *aux;
	Pilha *p;
	
	v = criar();
	aux = criar();
	p = criar();
	
	
	
	for(int i=0;i<4;i++){
		printf("Nome da peca: ");
		gets(peca[4].nome);
		
		printf("\nPrioridade: ");
		scanf("%d",&peca[4].prioridade);
		
		printf("Situacao da peca: ");
		scanf("%c",&peca[4].situacao);
	}
	
	 while(vazia(v){
	   if(peca.prioridade == 4){
		 inserir(v,peca);
		 
	 }
	}
  return (0);
}
