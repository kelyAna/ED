#include <stdio.h>

void bubble_sort(int *v, int n){
			int i, j, aux;

			for(i=n-1;i>=1;i--){
				for(j=0;j<i;j++){
						if(v[j] > v[j+1]){
								aux = v[j];
								v[j] = v[j+1];
								v[j+1] = aux;
						}
				}
			}

}

int main(){
	int v[7] = {9, 7, 2, 7, 5, 0, 1};
    bubble_sort(v, 7);
    int i;
		printf("Imprimindo os elementos do vetor ordenado\n");
    for(i=0;i<7;i++){
        printf("%d ", v[i]);
    }
    return 0;
}
