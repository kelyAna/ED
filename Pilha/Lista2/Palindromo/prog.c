#include <stdio.h>
#include "arquivo.h"
#include <stdlib.h>
#include <ctype.h>

int main(){
    int i,iguais = 0, tam = 0;
    char palavra[20];
    
    Pilha *p1;
    Pilha *aux;
    
    p1 = criar();
    aux = criar();
	
	printf("Digite o tamanho da palavra:");
    scanf("%d",&tam);
	
	i = 0;
	
 	printf("Digite a palavra:  ");
 	while(i<tam){
		scanf("%s",&palavra[i]);
		
		
        inserir(p1, palavra[i]);
        i++;
	 }
	   

    for(i=0;i<tam;i++){
        inserir(aux, remover(p1));
    }
    
    for(i=0;i<tam;i++){
        if(remover(p1) != remover(aux)){
			 iguais = iguais + 1;
	     
     }
  }
    
    if(iguais != 0) printf("\nA palavra informada não é um palíndromo!\n");
	else printf("\nA palavra informada é um palídromo!\n");
	   
    liberar(p1);
    liberar(aux);
    
    return(0);
}
