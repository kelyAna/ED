#include <stdio.h>

void insertion_sort(int *v, int n){
	int i, j, temp;

	for(i=1;i<n;i++){
		temp = v[i];
		for(j=i-1;j>=0;j--){
			if(v[j] > temp){
				temp = v[j];
			}
		}
		v[j+1] = temp;
	}
}

int main(){
	 int v[] = {9, 8, 2, 3, 5, 0, 1};
    insertion_sort(v, 7);
    int i;
    printf("Imprimindo os elementos do vetor ordenado");
    for(i=0;i<7;i++){
        printf("%d - ", v[i]);
    }
    return 0;
}
