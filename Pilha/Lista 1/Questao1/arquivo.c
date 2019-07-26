#include <malloc.h>
#include <stdio.h>
#include "arquivo.h"

typedef struct pilha{
	int elem[20];
	int topo;
	
}Pilha;

Pilha *criar(){
	Pilha *p = (Pilha*)malloc(sizeof(Pilha));
	p -> topo = -1;
	return(p);
}

void inserir(Pilha *p, int valor){
	if(p->topo == 20-1){
		printf("Pilha esta cheia!");
	
    }else{
		p->topo = p->topo + 1;
		p->elem[p->topo] = valor;
	}	
}

int remover(Pilha *p){
	int temp;
	if(p->topo == -1){
		printf("pilha vazia!");
	}else{
		temp = p->elem[p->topo];
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
	printf("\n O elemento do topo da pilha eh %d", p->elem[p->topo]);
}

void liberar(Pilha *p){
	free(p);
}



