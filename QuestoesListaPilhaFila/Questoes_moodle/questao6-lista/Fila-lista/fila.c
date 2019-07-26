//#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
#include "lista.h"

#define N 10

struct fila{
    Lista *l;
};

Fila* criar_fila(){
    Fila *f = (Fila*) malloc(sizeof(Fila));
    f->l = (Lista*) malloc(sizeof(Lista));
    return(f);
}

int cheia_fila(Fila *f){
   if(cheia_lista(f->l)) return 1;
   else return(0);
}

void inserir_fila(Fila *f, int valor){
   if(cheia_fila(f)) printf("A fila está cheia");
   else{
       inserir_lista(f->l, valor, f->l->qtd_elem);
   }
}

int vazia_fila(Fila *f){
  if(vazia_lista(f->l)) return 1;
  else return 0;
}

int remover_fila(Fila *f){
   int valor;
   if(vazia_fila(f)){ printf("A fila está vazia, não é possivel fazer remoção");
    exit(1);
   }
   valor = remover_lista(f->l, 0);
   return(valor); 
}

void imprimir_fila(Fila *f){
    imprimir_lista(f->l,0);
}

void liberar_fila(Fila *f){
  free(f);
}
