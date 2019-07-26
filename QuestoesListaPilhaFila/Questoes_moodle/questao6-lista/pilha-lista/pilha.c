//#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#include "lista.h"

#define N 10

struct pilha{
    Lista *l;
};

Pilha* criar_pilha(){
   Pilha *p = (Pilha*) malloc(sizeof(Pilha));
    p->l = (Lista*) malloc(sizeof(Lista));
    return(p);
}

int cheia_pilha(Pilha *p){
   if(cheia_lista(p->l)) return 1;
   else return(0);
}

void inserir_pilha(Pilha *p, int valor){
   if(cheia_pilha(p)) printf("A pilha está cheia");
   else{
       inserir_lista(p->l, valor, p->l->qtd_elem);
   }
}

int vazia_pilha(Pilha *p){
  if(vazia_lista(p->l)) return 1;
  else return 0;
}

int remover_pilha(Pilha *p){
   int valor;
   if(vazia_pilha(p)){ printf("A pilha está vazia, não é possivel fazer remoção");
    exit(1);
   }
   valor = remover_lista(p->l, p->l->qtd_elem-1);
   return(valor); 
}

void imprimir_pilha(Pilha *p){
    imprimir_lista(p->l,p->l->qtd_elem-1);
}

void liberar_pilha(Pilha *p){
  free(p);
}
