#include <stdio.h>


int Primo(int n) {
	for(int i=2; i<n; i++) {
 
      if(n==2){
        return 1;
	  }
         if(n%i==0){
         	  continue;	
		 }
         else{
         	   return 1;	
		 }
    }
         return 0;
}

int main(){
	int num;
	printf("Digite o valor do numero: ");
	scanf("%d",&num);
 
	printf("%d\n",Primo(num));
 
return 0;	
}
