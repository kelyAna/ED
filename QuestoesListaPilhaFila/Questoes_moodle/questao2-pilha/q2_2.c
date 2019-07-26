#include <stdio.h>
#include "pilha2.h"

int palindromo(char s[]){
  Pilha *p1, *p2, *aux;
  p1 = criar();
  p2 = criar();
  aux = criar();
  int i =0, e_palindromo =1;
  

  // percorrendo a palavra recebida e inserindo cada caractere na pilha
  while(s[i] != '\0'){
     inserir(p1, s[i]);
      inserir(p2, s[i]);
     i++;
  }
    
    //invertendo a pilha p1
    while(!vazia(p1)){
        inserir(aux, remover(p1));
    }

  // percorrendo a pilha, verificando se a palavra recebida é igual a palavra que está na pilha (inversão palavra recebida)
  i=0;
  while(!vazia(p2)){
     char c1 = remover(p2);
      char c2 = remover(aux);
     if(c1 != c2){
        e_palindromo = 0;
        break;
     }
     i++;
  }
  
  liberar(p1);

  return(e_palindromo);
}

int main(){
  char nome[20];

  printf("Digite um nome para saber se é um palindromo");
  scanf(" %[^\n]", nome);

  if(palindromo(nome)) printf("O nome %s é um palindromo", nome);
  else printf("O nome %s não é um palindromo", nome);



  
  return(0);
}
