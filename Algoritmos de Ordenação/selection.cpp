#include <stdio.h>

void selection(int *v, int n){
		int i,j,posicao_menor, aux;

		for(i=0;i<n;i++){
			pos_menor = i;
			for(j=i+1;j<n;j++){
				if(v[j] < v[posicao_menor]){
					posicao_menor = j;
				}
			}
			aux = v[posicao_menor];
			v[posicao_menor] = v[j];
			v[j] = aux;
		}
}

int main(){
		int v[7] = {9,7,8,1,2,0,4};
		
		selection(v,7);
		int i = 0;
		for(i=0;i<7;i++) printf("%d",v[i]);
	
	return 0;
}


