#include <stdio.h>
#include "pilha.h"

void converte_num(int valor){
    Pilha *p1;
    p1 = criar();
    while(valor!=1){
        inserir(p1, valor%2); // separando cada dígito da unidade e inserindo em p1
        valor /= 2;
    }
    
    //inserindo o ultimo 1 do quociente da divisão
    inserir(p1, valor);
    
    while(!vazia(p1)){
        printf("%d", remover(p1));
    }
    liberar(p1);

}

int main(){
  int valor;
  
  

  printf("Digite o valor na base 10 para convertê-lo para a base 2");
  scanf("%d", &valor);
    converte_num(valor);  
  
  return(0);
}
