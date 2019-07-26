#include <stdio.h>
#include <malloc.h>
#include   "arquivo.h"

typedef struct fila{
	int v[10];
	int inicio;
	int fim;
}Fila;

Fila* criar(){
	Fila *f = (Fila*)malloc(sizeof(fila));
	f->inicio = -1;
	return (f);
}

void inserir(Fila *p, int valor){
		if(f->fim == (10-1)){
			printf("Fila cheia");
		}else{
			f->inicio = 0;
			f->fim = f->fim + 1;
			f->v[f->fim] = valor;

		}
}

int remover(Fila *p){
		int temp;
		if(f->inicio ==-1){
			printf("Fila vazia");
		}else{
			temp = f->v[f->inicio];
			for(int i=0;i<=f->fim;i++){
				f->v[i-1] = f->inicio+1;

			}
		}
		return (temp);
}

int vazia(Fila *p){
	if(f->inicio == -1) return 1;
	else return 0;
}

int cheia(Fila *p){
	if(f->fim == (10-1)) return 1;
	else return 0;
}

void imprimir(Fila*p){
	printf("%d",f->v[f->inicio]);
}

void liberar(Fila *p){
	free(f);
}

