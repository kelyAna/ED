#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "arvore.h"

int main(){
	int opc, valor, partida = 0;
	int rodadas = 10, cont = 0;
	srand(time(NULL));

	Jogador *jog1 = (Jogador*) malloc(sizeof(Jogador));
	Jogador *jog2 = (Jogador*) malloc(sizeof(Jogador));
	Jogador *jog3 = (Jogador*) malloc(sizeof(Jogador));
	jog1->baralho = criar();
	jog2->baralho = criar();
	jog3->baralho = criar();

	jog1->cont_rodada = 0;
	jog2->cont_rodada = 0;
	jog3->cont_rodada = 0;
	
  do{
	printf("1- Iniciar jogo \n");
	printf("2- Sair \n");
	printf("Digite a opcao desejada: \n"); 
  	scanf("%d", &opc);
	
	switch(opc){
	  case 1:
 		 	printf("Digite a quantidade de partidas: \n");
			scanf("%d", &partida);

			while(partida){
				for(int i = 1; i < 10; i++){
					inserir(jog1->baralho, (rand() % 13));
					inserir(jog2->baralho, (rand() % 13));
					inserir(jog3->baralho, (rand() % 13));
				}
				
				
				int a = remover(jog1->baralho,procuraMenor(jog1->baralho));
				int b = remover(jog2->baralho,procuraMenor(jog2->baralho));
				int c = remover(jog3->baralho,procuraMenor(jog3->baralho));

				while (rodadas){
				
				if((a == b) && (a == c)) {
					jog1->cont_rodada++;
					jog2->cont_rodada++;
					jog3->cont_rodada++;
				//	printf("Empate nesta rodada");
           
				} 
				if((a > b) && (a > c)){
					jog1->cont_rodada++;
					printf("O jogador 1 ganhou essa rodada");
        
				}
				if((b > a)&&(b > c)){
					jog2->cont_rodada++;
					printf("O jogador 2 ganhou essa rodada");
				}
				if((c > a)&&(c > b)){
					jog3->cont_rodada++;
					printf("O jogador 3 ganhou essa rodada");
              
				}
				if((a == b)&&(a > c)){
					jog1->cont_rodada++;
					jog2->cont_rodada++;
					printf("O jogador 1 e o jogador 2 ganharam essa rodada");
                
				}
				if((b == c)&&(b > b)){
					jog2->cont_rodada++;
					jog3->cont_rodada++;
					printf("O jogador 2 e o jogador 3 ganharam essa rodada");
            
				}	
				if((a == c)&&(a > b)){
					jog2->cont_rodada++;
					jog3->cont_rodada++;
					printf("O jogador 1 e o jogador 3 ganharam essa rodada");
                    
				}
				rodadas--;				
				}
				partida--;
			}
	    if((jog1->cont_rodada > jog2->cont_rodada)&&(jog1->cont_rodada > jog2->cont_rodada)){
							printf("O jogador 1 ganhou");
				}
				  if((jog1->cont_rodada == jog2->cont_rodada) && (jog2->cont_rodada == jog3->cont_rodada)){
					printf("Todos os jogadores ganharam!");
				}
				  if((jog2->cont_rodada > jog1->cont_rodada)&&(jog2->cont_rodada > jog2->cont_rodada)){
							printf("O jogador 2 ganhou");
				}
				  if((jog3->cont_rodada > jog2->cont_rodada)&&(jog3->cont_rodada > jog1->cont_rodada)){
							printf("O jogador 3 ganhou");
				}
				  if((jog1->cont_rodada == jog2->cont_rodada)&&(jog1->cont_rodada > jog3->cont_rodada)){
							printf("Os jogadores 1 e 2 ganharam");
				}
				if((jog1->cont_rodada > jog2->cont_rodada)&&(jog1->cont_rodada == jog3->cont_rodada)){
							printf("Os jogadores 1 e 3 ganharam");
				}
				if((jog2->cont_rodada > jog1->cont_rodada)&&(jog2->cont_rodada == jog3->cont_rodada)){
							printf("Os jogadores 3 e 2 ganharam");
				}
 	    break;
	  case 2:
       
		
			
	    break;
      default: printf("Opcao Invalida");
	}
  }while(opc != 2);
  return(0);
}
