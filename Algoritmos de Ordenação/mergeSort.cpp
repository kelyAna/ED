#include <stdio.h>

void Merge(int v[],int inicio, int meio, int fim){
	int tam1 = meio - (inicio + 1);
    int tam2 = meio = fim;
    int A[tam1],B[tam2];
    int i,j,k;

    for(i=0;i<tam1;i++){
        A[i] = v[inicio+i];
    }

    for(j=0;j<tam2;j++){
        B[j] = v[j+meio+1];
    }

    while(i<tam1 && j<tam2){
        if(A[i] < B[j]){
            v[k] = A[i++];
        }else{
            v[k] = B[j++];
        }
        k++;
    }
    while(i<tam1) v[k++] = A[i++];
	while(j<tam2) v[k++] = B[j++];
}

void merge_sort(int *v, int inicio, int fim){
	int meio = (incio + fim)/2;

    merge_sort(v,inicio,meio-1);
    merge_sort(v,meio+1,fim);
    Merge(v,inicio,meio,fim);
}


int main(){
int v[5] =(1, 95, 30, 14, 29};

   merge_sort(v, 0,4);
   int k;
   for (k=0; k<5; k++)
        printf("%d ", v[k]);
   return 0;

}
