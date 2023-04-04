#include <stdio.h>
#include <stdlib.h>

void menu(){
	int opc = 0;
	
	while(opc == 0){
			printf("BEM VINDO AO MENU DE JOGOS\n");
	printf("1-Pergunta e Resposta\n");
	printf("2-Cobra na caixa\n");
	printf("3-Sair\n");
	
	scanf(" %i", &opc);
		
	switch(opc){
		case 1: per();
		case 2: Cobrakai();
		case 3: printf("Obrigado por jogar!!!\n");
		opc = 1;
	}
	}

	
}

void per(){
	int opc;
	printf("BEM VINDO AO PERGUNTAS E RESPOSTAS\n");
	printf("QUAL O PROTAGONISTA DA SERIE ZELDA\n");
	printf("1- ZELDA\n");
	printf("2- GANONDORF\n");
	printf("3- LINK\n");
	printf("4- DEKU TREE\n");
	scanf(" %i", &opc);
	
	switch(opc) {
		case 1: 
			printf("resposta ERRADA\n");
			printf("a resposta CORRETA era LINK\n \n");
			break;
		case 2:
			printf("resposta ERRADA\n");
			printf("a resposta CORRETA era LINK\n \n");
			break;
		case 3:
			printf("Resposta CORRETA\n \n");
			break;
		case 4:
			printf("resposta ERRADA\n");
			printf("a resposta CORRETA era LINK\n \n");
			break;
	}
	
	printf("QUAL O NOME DAS MAQUINAS PILOTADAS PELOS GUARDIOES DO REINO DE HYRULE\n");
	printf("1- DIVINE BEASTS\n");
	printf("2- LINKS AWAKENING\n");
	printf("3- PILLOWTALK\n");
	printf("4- LION TRAVEL\n");
	
	scanf(" %i", &opc);
	
	switch(opc) {
		case 1: 
			printf("resposta CORRETA\n \n");
			
			break;
		case 2:
			printf("resposta errada\n");
			printf("a resposta CORRETA era DIVINE BEASTS\n \n");
			break;
		case 3:
			printf("Resposta ERRADA\n");
			printf("a resposta CORRETA era DIVINE BEASTS\n \n");
			break;
		case 4:
			printf("Resposta ERRADA\n");
			printf("a resposta CORRETA era DIVINE BEASTS\n \n");
			break;
	}
	
	printf("EM ZELDA OCARINA OF TIME, LINK CONHECE SEU CAVALO NO PASSADO E QUANDO VAI PARA O FUTURO ESSE CAVALO O ACOMPANHA EM SUA JORNADA, QUAL ERA O NOME DO CAVALO?\n");
	printf("1- SAM\n");
	printf("2- EREN\n");
	printf("3- SHINJI\n");
	printf("4- EPONA\n");
	
	scanf(" %i", &opc);
	
	switch(opc) {
		case 1: 
			printf("Resposta ERRADA\n");
			printf("a resposta CORRETA era EPONA\n \n");
			
			break;
		case 2:
			printf("Resposta ERRADA\n");
			printf("a resposta CORRETA era EPONA\n \n");
			break;
		case 3:
			printf("Resposta ERRADA\n");
			printf("a resposta CORRETA era EPONA\n \n");
			break;
		case 4:
			printf("resposta CORRETA\n \n");
			break;
	}
	
	printf("EM ZELDA OCARINA OF TIME O PERSONAGEM SHEIK ERA UM PERSONAGEM DISFARCADO, QUAL?\n");
	printf("1- LINK\n");
	printf("2- ORTEGA\n");
	printf("3- ZELDA\n");
	printf("4- RHOAM BOSPHORAMUS\n");
	
	scanf(" %i", &opc);
	
	switch(opc) {
		case 1: 
			printf("resposta ERRADA\n");
			printf("a resposta CORRETA era ZELDA\n \n");
			
			break;
		case 2:
			printf("resposta ERRADA\n");
			printf("a resposta CORRETA era ZELDA\n \n");
			break;
		case 3:
			printf("resposta CORRETA\n \n");
			
			break;
		case 4:
			printf("Resposta ERRADA\n \n");
			printf("a resposta CORRETA era ZELDA\n \n");
			break;
	}
	
	printf("EM ZELDA OCARINA OF TIME, SEU PRIMEIRO ENCONTRO COM UMA DAS FADAS ESPALHADAS PELO REINO E MARCADO POR QUAL MUSICA?\n");
	printf("1- ZORAS DOMAIN\n");
	printf("2- GREAT FAIRYS FOUNTAIN\n");
	printf("3- INSIDE THE HOUSE\n");
	printf("4- SONG OF TIME\n");
	
	scanf(" %i", &opc);
	
	switch(opc) {
		case 1: 
			printf("Resposta ERRADA\n");
			printf("a resposta CORRETA era GREAT FAIRYS FOUNTAIN\n \n");
			
			break;
		case 2:
			printf("resposta CORRETA\n \n");
			break;
		case 3:
			printf("Resposta ERRADA\n");
			printf("a resposta CORRETA era GREAT FAIRYS FOUNTAIN\n \n");
			break;
		case 4:
			printf("Resposta ERRADA\n");
			printf("a resposta CORRETA era GREAT FAIRYS FOUNTAIN\n \n");
			break;
	}
	
	printf("deseja jogar novamente?\n");
	printf("1- sim\n");
	printf("2- nao, volta pro menu\n");
	
	scanf(" %i", &opc);
	
	switch(opc){
		case 1: printf("\n");
		per();
		case 2: printf("\n"); 
		menu();
	}
	
	
}

void Cobrakai(){
	int escolha;
	
	int cont1 = 1,cont2 = 1,cont3 = 1,cont4 = 1,cont5 = 1;
	
	int caixa1[1];
	int caixa2[1];
	int caixa3[1];
	int caixa4[1];
	int caixa5[1];
	
	
	caixa1[0] = rand()%3;
	caixa2[0] = rand()%3;
	caixa3[0] = rand()%3;
	caixa4[0] = rand()%3;
	caixa5[0] = rand()%3;
	
	char jogador[2] = "";
	char jogador1="";
	char jogador2="";
	
	printf("BEM VINDO AO JOGO DA COBRA BOTAO VAZIO\n");
	printf("JOGADOR 1 DIGITE SEU NOME\n");
	scanf(" %c", &jogador[0]);
	printf("JOGADOR 2 DIGITE SEU NOME\n");
	scanf(" %c", &jogador[1]);
	
	
	
	jogador1 = jogador[rand()%2];
	
	if (jogador1 == jogador[0]){
		jogador2 = jogador[1];
	}
	
	if (jogador1== jogador[1]){
		jogador2=jogador[0];
	}
	
	printf("%c escolha um numero de 1 a 5", jogador1);
	scanf(" %i", &escolha);

	
	switch(escolha){
		case 1: 
	if (cont1 == 1){
		if (caixa1[0] == 2){
			printf("voce achou uma cobra");
			printf("voce perdeu");
			break;
		}
	 
	
	if (caixa1[0] == 1){
		printf("voce achou o botao");
		printf("voce venceu");
		break;
	}
	
	
	if ( caixa1[0] == 0){
		printf("caixa esta vazia");
		cont1--;
		break;
	}
	
	
	}

	else{
		printf("essa caixa ja foi selecionada");
		scanf(" %i", &escolha);
		switch(escolha)
		break;
	}
	
	
	
	}
	
	
}

int main(int argc, char *argv[]) {
	
	menu();
	
	
	
	return 0;
}
