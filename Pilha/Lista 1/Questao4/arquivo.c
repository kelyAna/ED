#include <malloc.h>
#include <stdio.h>
#include "arquivo.h"

typedef struct pilha{
	int elem[5];
	int topo;
	
}Pilha;

Pilha *criar(){
	Pilha *p = (Pilha*)malloc(sizeof(Pilha));
	p -> topo = -1;
	
	return(p);
}

void inserir(Pilha *p, int valor){
	if(p->topo == 5-1){
		
	
    }else{
		p->topo = p->topo + 1;
		p->elem[p->topo] = valor;
		
	}	
}

int remover(Pilha *p){
	int temp;
	if(p->topo == -1){
		
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
	if(p->topo == 5-1){
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

int compara(Pilha *p){
	int num;
	printf("Digite um num:");
	scanf("%d",&num);
	
	if(p->topo == num){
	  return 1;
	} else{
	  return 0;	
	}
}



