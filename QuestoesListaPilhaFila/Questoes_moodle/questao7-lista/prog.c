#include <stdio.h>
#include "lista.h"

Lista * intercala_listas(Lista *l1, Lista *l2){
   Lista *l3 = criar();
   int pos=0;

   // intercalando os elementos das duas listas
   while(!vazia(l1) && !vazia(l2)){
      inserir(l3, remover(l1,0), pos);
      inserir(l3, remover(l2,0), pos+1);
      pos=pos+2;
   }

   // inserindo os elementos remanescentes de cada lista
   while(!vazia(l1)){ inserir(l3, remover(l1,0), pos); pos++;}
   while(!vazia(l2)){ inserir(l3, remover(l2,0), pos); pos++;}

  return(l3);
 }

int main(){
  int i;
  Lista *l1, *l2, *l3;

  l1 = criar();
  l2 = criar();

  for(i=0; i<10; i++) inserir(l1, i, i);
  for(i=0; i<10; i++) inserir(l2, i, i);
 
  l3 = intercala_listas(l1, l2);

    int valor = 0;
   while(!vazia(l3)){ valor = remover(l3,0); printf("%d", valor);} 

  liberar(l1);
  liberar(l2);
  liberar(l3);				

  return(0);
}
