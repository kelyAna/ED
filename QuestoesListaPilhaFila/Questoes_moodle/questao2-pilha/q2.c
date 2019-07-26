#include <stdio.h>
#include "pilha2.h"

int palindromo(char s[]){
  Pilha *p1;
  p1 = criar();
  int i =0, e_palindromo =1;
  

  // percorrendo a palavra recebida e inserindo cada caractere na pilha
  while(s[i] != '\0'){
     inserir(p1, s[i]);
     i++;
  }

  // percorrendo a pilha, verificando se a palavra recebida é igual a palavra que está na pilha (inversão palavra recebida)
  i=0;
  while(!vazia(p1)){
     char c = remover(p1);
     if(s[i] != c){
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
