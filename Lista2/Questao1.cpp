#include <stdio.h>

struct paciente
{
	char nome[50];
	char endereco[50];
	char telefone[8];
	float altura;
	char data_nasc[8];
	float peso;
};

int main(){
	
	struct paciente Maria[1];
	
	
	printf("Digite o nome: ");
	fgets(Maria[1].nome,sizeof(Maria[1].nome),stdin);
	
	printf("Digite o endereco: ");
	fgets(Maria[1].endereco,sizeof(Maria[1].endereco),stdin);
	
	printf("Digite o telefone: ");
	fgets(Maria[1].telefone,sizeof(Maria[1].telefone),stdin);
	
		
	printf("Digite a data de nascimento: ");
	fgets(Maria[1].data_nasc,sizeof(Maria[1].data_nasc),stdin);
	
	printf("Digite a altura: ");
	scanf("%f", &Maria[1].altura);

	printf("Digite o peso: ");
	scanf("%f", &Maria[1].peso);
	

		printf("Nome: %s", Maria[1].nome);
		printf("\n");
		printf("Endereco: %s", Maria[1].endereco);
		printf("\n");
		printf("Telefone: %s", Maria[1].telefone);
		printf("\n");
		printf("Altura: %0.1f", Maria[1].altura);
		printf("\n");
		printf("Data de nascimento: %s", Maria[1].data_nasc);
		printf("\n");
		printf("Peso: %0.1f", Maria[1].peso);
		printf("\n");	
	
	
	return 0;
}
