#include <stdio.h>

 int fnc(int L[], int n, int Q[], int m){
 		int cont = 0;
 		L[n], Q[m];
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
 			if(L[i] == Q[j]){
 				cont = cont + 1;
			 }
		}
	}
	return cont;
 }


int main(){
	int n, m;
	int cont = 0;
	scanf("%d, %d", &n, &m);
	int L[n], Q[m];
	
	for(int i = 0; i < n; i++){
        scanf("%d", &L[i]);
    }
    for(int i = 0; i < m; i++){
        scanf("%d", &Q[i]);
    }
    
    
    
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n-1; j++){
				if(L[j] > L[j+1]){
						int aux = L[j];
						L[j] = L[j + 1];
						L[j + 1] = aux;
				}
			}
		}
		for(int i = 0; i < m; i++){
			for(int j = 0; j < m-1; j++){
				if(Q[j] > Q[j+1]){
						int aux = Q[j];
						Q[j] = Q[j + 1];
						Q[j + 1] = aux;
				}
			}
		}

	printf("\n%d Valores iguais: ", fnc(L,n,Q,m));
	return 0;
}
