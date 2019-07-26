#include <malloc.h>
#include <stdio.h>
#include "arquivo.h"

typedef struct pilha{
	int num[15];
	int topo;
	
}Pilha;

Pilha *criar(){
	Pilha *p = (Pilha*)malloc(sizeof(Pilha));
	p -> topo = -1;
	return(p);
}

void inserir(Pilha *p, int valor){
	if(p->topo == 15-1){
		printf("Erro ao tentar inserir algum numero, a pilha esta cheia!");
	
    }else{
		p->topo = p->topo + 1;
		p->num[p->topo] = valor;
		
	}	
}

int remover(Pilha *p){
	int temp;
	if(p->topo == -1){
		printf("Erro ao tentar remover  numero, a pilha esta vazia!");
	}else{
		temp = p->num[p->topo];
		p->topo = p->topo - 1;
	}
	return (temp);
}

int vazia(Pilha *p){
	if(p->topo == -1){
		 return 1;
	} 
	else{
		 return 0;
	}
}

int cheia(Pilha *p){
	if(p->topo == 20-1){
		return 1;
	}
	else{
		 return 0;
	}
}

void imprimir(Pilha *p){
	printf("\n O numero do topo da pilha eh %d", p->num[p->topo]);
}

void liberar(Pilha *p){
	free(p);
}




