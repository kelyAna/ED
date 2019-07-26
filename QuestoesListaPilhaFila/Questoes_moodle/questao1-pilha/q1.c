#include <stdio.h>
#include "pilha.h"

int main(){
  int valor;
  Pilha *p1, *p2;
  p1 = criar();
  p2 = criar();

  printf("Digite o valor para saber seu inverso");
  scanf("%d", &valor);

  while(valor>=10){
     inserir(p1, valor%10); // separando cada dígito da unidade e inserindo em p1
     valor /= 10;
  }

  if(valor > 0)  inserir(p1, valor);

  while(!vazia(p1)){
     inserir(p2, remover(p1));
  }


  while(!vazia(p2)){
     valor = remover(p2);
     printf("%d", valor);
  }

  liberar(p1);
  liberar(p2);


  return(0);
}
