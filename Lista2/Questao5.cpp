#include <stdio.h>
#include <math.h>

int Potenciacao(int exp){
	if(exp == 0){
		return 1;
	}
	else{
	return pow(2,exp);
	}
}


int main(){
	int exp;
	printf("Digite o valor do expoente: ");
	scanf("%d",&exp);
 
	printf("%d\n",Potenciacao(exp));
	
	
	
	return 0;
}
