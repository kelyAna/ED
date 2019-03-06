#include <stdio.h>

void Swap(int *valor1, int *valor2){
	int troca;
	
	troca = *valor1;
	*valor1 = *valor2;
	*valor2 = troca;
}



int main(){
	int valor1 = 10, valor2 = 30;

	Swap(&valor1, &valor2);
	printf("Primeiro valor: %d; \nSegundo valor: %d.", valor1, valor2);
	
	return 0;
}
