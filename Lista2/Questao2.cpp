#include <stdio.h>
#include <string.h>

struct pessoa
{
	char nome[20];
	char endereco[20];
	char telefone[8];
	
};

int main(){
	
	pessoa pessoaVet[4];
	
	int i,j;
	
	for(i = 1; i < 4; i++){
		printf("Digite o nome:\n");
			fgets(pessoaVet[i].nome,sizeof(pessoaVet[i].nome),stdin);
		printf("Digite o endereco:\n");
			fgets(pessoaVet[i].endereco,sizeof(pessoaVet[i].endereco),stdin);
		printf("Digite o telefone:\n");
			fgets(pessoaVet[i].telefone,sizeof(pessoaVet[i].telefone),stdin);		
	}
	
	for(i = 1; i < 4; i++){
        for(j = i+1; j < 4;j++){
	        if(strcoll(pessoaVet[i].nome , pessoaVet[j].nome) > 0 ){
                pessoaVet[0]=pessoaVet[i];
                pessoaVet[i]=pessoaVet[j];
                pessoaVet[j]=pessoaVet[0];
	        }
        }
	}
	for(i = 1; i < 4; i++){
        printf("NOME: %s\n ENDERECO: %s\n TELEFONE: %s\n",pessoaVet[i].nome, pessoaVet[i].endereco, pessoaVet[i].telefone);
       
        
	}
	
	return 0;
}

