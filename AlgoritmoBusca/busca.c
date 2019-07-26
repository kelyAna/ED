#include <stdio.h>

int busca_vetor_desordenado(int *v, int n, int elem){
    for(int i=0; i<n;i++){
        if(v[i] == elem) return(i);
    }
    
    return(-1);
}

int busca_vetor_ordenado(int *v, int n, int elem){
    for(int i=0; i<n;i++){
        if(v[i] == elem) return(i);
        else if(v[i] > elem) return(-1);
    }
    
    return(-1);
}

int busca_binaria(int *v, int n, int elem){
    int ini=0, fim = n-1, meio;
    
    while(fim-ini>=0){
        meio = (ini+fim)/2;
        if(elem == v[meio]) return meio;
        else if(elem>v[meio]) ini = meio+1;
        else if(elem<v[meio]) fim = meio-1;
    }
    
    return(-1);
}

int main(){
    int v[10] = {1,2,3,4,5,6,7,8,9,10};
    int elem;
    printf("Digite um valor a ser buscado no vetor");
    scanf("%d", &elem);
    int pos = busca_binaria(v, 10, elem);
    
    if(pos!=-1) printf("O valor %d existe no vetor e está na posição %d", elem, pos);
    else printf("Elemento não encontrado no vetor");
    
    return(0);
}
