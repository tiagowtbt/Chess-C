#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <conio.h>

char pecas1[6] = { 'P', 'T' , 'C', 'B', 'Q', 'K'};


char pecas2[6] = { 'p', 't', 'c', 'b', 'q', 'k'};


char tabuleiro[14][14] ={	'_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_',
						    '|', ' ', '|', '1', '2', '3', '4', '5', '6', '7', '8', '|', ' ', '|',
						    '|', '-', '|', '-', '-', '-', '-', '-', '-', '-', '-', '|', '-', '|',
						    '|', '1', '|', 't', 'c', 'b', 'q', 'k', 'b', 'c', 't', '|', '1', '|',
						    '|', '2', '|', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p', '|', '2', '|',
						    '|', '3', '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', '3', '|',
						    '|', '4', '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', '4', '|',
						    '|', '5', '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', '5', '|',
						    '|', '6', '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', '6', '|',
						    '|', '7', '|', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P', '|', '7', '|',
						    '|', '8', '|', 'T', 'C', 'B', 'Q', 'K', 'B', 'C', 'T', '|', '8', '|',
						    '|', '-', '|', '-', '-', '-', '-', '-', '-', '-', '-', '|', '-', '|',
						    '|', ' ', '|', '1', '2', '3', '4', '5', '6', '7', '8', '|', ' ', '|',
						    '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-',};
 
char tabuleiro1[14][14];


void menu () {
	//system("cls");
	//printf("\n\n\n_____        _____    __________      __________       __________        __________      ______________\n\\    \\      /    /   /          \\    |          \\     |          \\      |          |    |             /\n \\    \\    /    /   |            |   |     __    \\    |    ___    \\     |     _____|    |_______     / \n  \\    \\  /    /    |     /\\     |   |    |  \\    \\   |   |   \\    \\    |    |                 /    /  \n   \\    \\/    /     |    |  |    |   |    |   \\    |  |   |___/    /    |    |_____           /    /   \n    \\        /      |    |__|    |   |    |    |   |  |           /     |          |         /    /    \n    /        \\      |            |   |    |    |   |  |          /      |     _____|        /    /     \n   /    /\\    \\     |     __     |   |    |   /    |  |    |\\    \\      |    |             /    /      \n  /    /  \\    \\    |    |  |    |   |    |__/    /   |    | \\    \\     |    |_____       /    /______ \n /    /    \\    \\   |    |  |    |   |           /    |    |  \\    \\    |          |     /            |\n/____/      \\____\\  |____|  |____|   |__________/     |____|   \\____\\   |__________|    /_____________|\n\n\n\n");
	//printf("-----------------------------------------press any key to start-----------------------------------------");
	//sleep(1);
	system("cls");
	printf("\n\n\n_____        _____    __________      __________       __________        __________      ______________\n\\    \\      /    /   /          \\    |          \\     |          \\      |          |    |             /\n \\    \\    /    /   |            |   |     __    \\    |    ___    \\     |     _____|    |_______     / \n  \\    \\  /    /    |     /\\     |   |    |  \\    \\   |   |   \\    \\    |    |                 /    /  \n   \\    \\/    /     |    |  |    |   |    |   \\    |  |   |___/    /    |    |_____           /    /   \n    \\        /      |    |__|    |   |    |    |   |  |           /     |          |         /    /    \n    /        \\      |            |   |    |    |   |  |          /      |     _____|        /    /     \n   /    /\\    \\     |     __     |   |    |   /    |  |    |\\    \\      |    |             /    /      \n  /    /  \\    \\    |    |  |    |   |    |__/    /   |    | \\    \\     |    |_____       /    /______ \n /    /    \\    \\   |    |  |    |   |           /    |    |  \\    \\    |          |     /            |\n/____/      \\____\\  |____|  |____|   |__________/     |____|   \\____\\   |__________|    /_____________|\n\n\n\n");
	printf("\n\n\n");
	sleep(1);	
	system("pause");

}

void imprimeT() {

	int i, j;

	printf("\n\n");

	for (i = 0; i < 14; i++) {
		printf("\t\t\t");
		for (j = 0; j < 14; j++) {
			printf("%c ", tabuleiro[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
}

void levelup () {

	system("cls");

	int i, peca;

	for (i = 0; i < 14; i++) {
		if(tabuleiro[3][i] == 'P') {
			printf("Seu peao pode subir de nivel.\n");
			printf("Qual peca voce deseja?\n\t1-Torre\n\t2-Cavalo\n\t3-Bispo\n\t4-Rainha\n");
				peca = getch();
				switch (peca) {
					case '1': tabuleiro[3][i] = 'T'; break;

					case '2': tabuleiro[3][i] = 'C'; break;

					case '3': tabuleiro[3][i] = 'B'; break;

					case '4': tabuleiro[3][i] = 'Q'; break;

					default: printf("Peca nao encontrada.Digite novamente\n"); peca = getch(); break;
				}
			}
		}
	
	

	for (i = 0; i < 14; i++) {
		if(tabuleiro[10][i] == 'p') {
			printf("Seu peao pode subir de nivel.\n");
			printf("Qual peca voce deseja?\n\t1-Torre\n\t2-Cavalo\n\t3-Bispo\n\t4-Rainha\n");
				peca = getch();
				switch (peca) {
					case '1': tabuleiro[10][i] = 't'; break;

					case '2': tabuleiro[10][i] = 'c'; break;

					case '3': tabuleiro[10][i] = 'b'; break;

					case '4': tabuleiro[10][i] = 'q'; break;

					default: printf("Peca nao encontrada.Digite novamente\n"); peca = getch(); break;
				}
			}	
		}
	imprimeT();

}

int cheque_mate2() {
	int i, j, k = 1, a = 0, b; 

	for (i = 0; i < 14; i++) {
		for (j = 0; j < 14; j++) {
			if (tabuleiro[i][j] == 'k') {
				k = 1;

				return k;
			}
			else {
				a++;
			}
		}
	}
	if (a == 196) {
		b = 0;
		return b;
	}
}

int cheque_mate1() {
	int i, j, K = 1, a = 0, b; 

	for (i = 0; i < 14; i++) {
		for (j = 0; j < 14; j++) {
			if (tabuleiro[i][j] == 'K') {
				K = 1;

				return K;
				}
			else {
				a++;
			}
		}
	}
	if (a == 196) {
		b = 0;
		return b;
	}
}

int verifica_x() {
	
	int a, i, j;
	
	for (i = 0; i < 14; i++) {
		for (j = 0; j < 14; j++) {
			if (tabuleiro[i][j] == 'x') {
				a = 1;
			}
		}
	}
	
	return a;
}

int verifica_0() {
	int z = 0, i, j;
	
	for (i = 0; i < 14; i++) {
		for (j = 0; j < 14; j++) {
			if (tabuleiro[i][j] == '0') {
				z = 1;
			}
		}
	}
	
	return z;
}

int verifica_r() {
	int r = 0, i, j;
	
	for (i = 0; i < 14; i++) {
		for (j = 0; j < 14; j++) {
			if (tabuleiro[i][j] == 'R') {
				r = 1;
			}
		}
	}
	
	return r;
}

void limpa_0() {
	
	int i, j;
	
	for (i = 0; i < 14; i++) {
		for (j = 0; j < 14; j++) {
			if (tabuleiro[i][j] == '0') {
				tabuleiro[i][j] = tabuleiro1[i][j];
			}
		}
	}
}

void limpa_x() {
	
	int i, j;
	
	for (i = 0; i < 14; i++) {
		for (j = 0; j < 14; j++) {
			if (tabuleiro[i][j] == 'x') {
				tabuleiro[i][j] = ' ';
			}
		}
	}
}

void limpa_R() {
	
	int i, j;
	
	for (i = 0; i < 14; i++) {
		for (j = 0; j < 14; j++) {
			if (tabuleiro[i][j] == 'R') {
				tabuleiro[i][j] = tabuleiro1[i][j];
			}
		}
	}
}

void p_movimento1(char peca, int linha, int coluna) {

	int i, j;

	switch(peca) {
		case 'P':
			if (linha == 9) {
				if (tabuleiro[linha-1][coluna] == ' ') tabuleiro[linha-1][coluna] = 'x';
				if (tabuleiro[linha-2][coluna] == ' ' && tabuleiro[linha-1][coluna] == 'x') tabuleiro[linha-2][coluna] = 'x';
			} else {
				if (tabuleiro[linha-1][coluna] == ' ') tabuleiro[linha-1][coluna] = 'x';
			}
			break;
		case 'p':
			if (linha == 4) {
				if (tabuleiro[linha+1][coluna] == ' ') tabuleiro[linha+1][coluna] = 'x';
				if (tabuleiro[linha+2][coluna] == ' ' && tabuleiro[linha+1][coluna] == 'x') tabuleiro[linha+2][coluna] = 'x';
			} else {
				if (tabuleiro[linha+1][coluna] == ' ') tabuleiro[linha+1][coluna] = 'x';
			}
			break;
		case 'C':
		case 'c':
			if (tabuleiro[linha-1][coluna-2] == ' ') tabuleiro[linha-1][coluna-2] = 'x';
			if (tabuleiro[linha-1][coluna+2] == ' ') tabuleiro[linha-1][coluna+2] = 'x';
			if (tabuleiro[linha+1][coluna-2] == ' ') tabuleiro[linha+1][coluna-2] = 'x';
			if (tabuleiro[linha+1][coluna+2] == ' ') tabuleiro[linha+1][coluna+2] = 'x';
			if (tabuleiro[linha-2][coluna-1] == ' ') tabuleiro[linha-2][coluna-1] = 'x';
			if (tabuleiro[linha-2][coluna+1] == ' ') tabuleiro[linha-2][coluna+1] = 'x';
			if (tabuleiro[linha+2][coluna-1] == ' ') tabuleiro[linha+2][coluna-1] = 'x';
			if (tabuleiro[linha+2][coluna+1] == ' ') tabuleiro[linha+2][coluna+1] = 'x';
			break;
		case 'T':
		case 't':
			if (tabuleiro[linha-1][coluna] == ' ') tabuleiro[linha-1][coluna] = 'x';
			if (tabuleiro[linha+1][coluna] == ' ') tabuleiro[linha+1][coluna] = 'x';
			if (tabuleiro[linha][coluna-1] == ' ') tabuleiro[linha][coluna-1] = 'x';
			if (tabuleiro[linha][coluna+1] == ' ') tabuleiro[linha][coluna+1] = 'x';
				
			for (i = coluna - 2; i > 0; i--) {
				if (tabuleiro[linha][i] == ' ' && tabuleiro[linha][i+1] == 'x') tabuleiro[linha][i] = 'x';
			}
			for (i = coluna + 2; i < 14; i++) {
				if (tabuleiro[linha][i] == ' ' && tabuleiro[linha][i-1] == 'x') tabuleiro[linha][i] = 'x';
			}
			for (i = linha - 2; i > 0; i--) {
				if (tabuleiro[i][coluna] == ' ' && tabuleiro[i+1][coluna] == 'x') tabuleiro[i][coluna] = 'x';
			}
			for (i = linha + 2; i < 14; i++) {
				if (tabuleiro[i][coluna] == ' ' && tabuleiro[i-1][coluna] == 'x') tabuleiro[i][coluna] = 'x';
			}
			break;
		case 'B':
		case 'b':
			if (tabuleiro[linha+1][coluna-1] == ' ') tabuleiro[linha+1][coluna-1] = 'x';
			if (tabuleiro[linha+1][coluna+1] == ' ') tabuleiro[linha+1][coluna+1] = 'x';
			if (tabuleiro[linha-1][coluna-1] == ' ') tabuleiro[linha-1][coluna-1] = 'x';
			if (tabuleiro[linha-1][coluna+1] == ' ') tabuleiro[linha-1][coluna+1] = 'x';
			
			for (i = linha - 2; i > 0; i--) {
				for (j = coluna - 2; j > 0; j--) {
					if (tabuleiro[i][j] == ' ' && tabuleiro[i+1][j+1] == 'x') tabuleiro[i][j] = 'x';
				}
			}
			for (i = linha - 2; i > 0; i--) {
				for (j = coluna + 2; j < 14; j++) {
					if (tabuleiro[i][j] == ' ' && tabuleiro[i+1][j-1] == 'x') tabuleiro[i][j] = 'x';
				}
			}
			for (i = linha + 2; i < 14; i++) {
				for (j = coluna - 2; j > 0; j--) {
					if (tabuleiro[i][j] == ' ' && tabuleiro[i-1][j+1] == 'x') tabuleiro[i][j] = 'x';
				}
			}
			for (i = linha + 2; i < 14; i++) {
				for (j = coluna + 2; j < 14; j++) {
					if (tabuleiro[i][j] == ' ' && tabuleiro[i-1][j-1] == 'x') tabuleiro[i][j] = 'x';
				}
			}
			break;
		case 'K':
		case 'k':
			if (tabuleiro[linha-1][coluna-1] == ' ') tabuleiro[linha-1][coluna-1] = 'x';
			if   (tabuleiro[linha-1][coluna] == ' ') tabuleiro[linha-1][coluna] = 'x';
			if (tabuleiro[linha-1][coluna+1] == ' ') tabuleiro[linha-1][coluna+1] = 'x';
			if   (tabuleiro[linha][coluna-1] == ' ') tabuleiro[linha][coluna-1] = 'x';
			if   (tabuleiro[linha][coluna+1] == ' ') tabuleiro[linha][coluna+1] = 'x';
			if (tabuleiro[linha+1][coluna-1] == ' ') tabuleiro[linha+1][coluna-1] = 'x';
			if   (tabuleiro[linha+1][coluna] == ' ') tabuleiro[linha+1][coluna] = 'x';
			if (tabuleiro[linha+1][coluna+1] == ' ') tabuleiro[linha+1][coluna+1] = 'x';
			break;
		case 'Q':
		case 'q':
			if (tabuleiro[linha-1][coluna-1] == ' ') tabuleiro[linha-1][coluna-1] = 'x';
			if   (tabuleiro[linha-1][coluna] == ' ') tabuleiro[linha-1][coluna] = 'x';
			if (tabuleiro[linha-1][coluna+1] == ' ') tabuleiro[linha-1][coluna+1] = 'x';
			if   (tabuleiro[linha][coluna-1] == ' ') tabuleiro[linha][coluna-1] = 'x';
			if   (tabuleiro[linha][coluna+1] == ' ') tabuleiro[linha][coluna+1] = 'x';
			if (tabuleiro[linha+1][coluna-1] == ' ') tabuleiro[linha+1][coluna-1] = 'x';
			if   (tabuleiro[linha+1][coluna] == ' ') tabuleiro[linha+1][coluna] = 'x';
			if (tabuleiro[linha+1][coluna+1] == ' ') tabuleiro[linha+1][coluna+1] = 'x';
			
			for (i = coluna - 2; i > 0; i--) {
				if (tabuleiro[linha][i] == ' ' && tabuleiro[linha][i+1] == 'x') tabuleiro[linha][i] = 'x';
			}
			for (i = coluna + 2; i < 14; i++) {
				if (tabuleiro[linha][i] == ' ' && tabuleiro[linha][i-1] == 'x') tabuleiro[linha][i] = 'x';
			}
			for (i = linha - 2; i > 0; i--) {
				if (tabuleiro[i][coluna] == ' ' && tabuleiro[i+1][coluna] == 'x') tabuleiro[i][coluna] = 'x';
			}
			for (i = linha + 2; i < 14; i++) {
				if (tabuleiro[i][coluna] == ' ' && tabuleiro[i-1][coluna] == 'x') tabuleiro[i][coluna] = 'x';
			}
			for (i = linha - 2; i > 0; i--) {
				for (j = coluna - 2; j > 0; j--) {
					if (tabuleiro[i][j] == ' ' && tabuleiro[i+1][j+1] == 'x') tabuleiro[i][j] = 'x';
				}
			}
			for (i = linha - 2; i > 0; i--) {
				for (j = coluna + 2; j < 14; j++) {
					if (tabuleiro[i][j] == ' ' && tabuleiro[i+1][j-1] == 'x') tabuleiro[i][j] = 'x';
				}
			}
			for (i = linha + 2; i < 14; i++) {
				for (j = coluna - 2; j > 0; j--) {
					if (tabuleiro[i][j] == ' ' && tabuleiro[i-1][j+1] == 'x') tabuleiro[i][j] = 'x';
				}
			}
			for (i = linha + 2; i < 14; i++) {
				for (j = coluna + 2; j < 14; j++) {
					if (tabuleiro[i][j] == ' ' && tabuleiro[i-1][j-1] == 'x') tabuleiro[i][j] = 'x';
				}
			}
			break;
	}
	
	system("cls");
	imprimeT();
}

void movimento1(int linha, int coluna, int linha1, int coluna1) {
		if (tabuleiro[linha1][coluna1] != 'x') {
			do{
			printf("Posicao invalida.\nDigite a posicao que voce deseja mover.\n");
			scanf("%d %d", &linha1, &coluna1);
			linha1+=2; coluna1+=2;
		} while (tabuleiro[linha1][coluna1] != 'x'); }

			tabuleiro[linha1][coluna1] = tabuleiro[linha][coluna];
			tabuleiro[linha][coluna] = ' ';
			
			limpa_0();
			limpa_x();
			limpa_R();
		
			system("cls");
			imprimeT();

			int i, j;
			
			for (i = 0; i < 14; i++) {
				for (j = 0; j < 14; j++) {
					tabuleiro1[i][j] = tabuleiro[i][j];
			}
		}
}

void comer1(int linha, int coluna, int linha1, int coluna1) {
	
	if (tabuleiro[linha1][coluna1] == '0') { 
		tabuleiro[linha1][coluna1] = tabuleiro[linha][coluna];
		tabuleiro[linha][coluna] = ' ';
	
		limpa_0();
		limpa_x();
		limpa_R();

		system("cls");
		imprimeT();

		int i, j;

		for (i = 0; i < 14; i++) {
			for (j = 0; j < 14; j++) {
				tabuleiro1[i][j] = tabuleiro[i][j];
			}
		}
	}
}

void p_comer1 (char peca, int linha, int coluna) {

	int i, j, b;
		switch (peca) {
			case 'P' :
				for (i = 0; i < 6; i++){
					if (tabuleiro[linha-1][coluna-1] == pecas2[i] ) tabuleiro[linha-1][coluna-1] = '0';
					if (tabuleiro[linha-1][coluna+1] == pecas2[i] ) tabuleiro[linha-1][coluna+1] = '0';				}
				break;

			case 'C' :
				for (i = 0; i < 6; i++){
					if (tabuleiro[linha-1][coluna-2] == pecas2[i] ) tabuleiro[linha-1][coluna-2] = '0';
					if (tabuleiro[linha-1][coluna+2] == pecas2[i] ) tabuleiro[linha-1][coluna+2] = '0';
					if (tabuleiro[linha+1][coluna-2] == pecas2[i] ) tabuleiro[linha+1][coluna-2] = '0';
					if (tabuleiro[linha+1][coluna+2] == pecas2[i] ) tabuleiro[linha+1][coluna+2] = '0';
					if (tabuleiro[linha-2][coluna-1] == pecas2[i] ) tabuleiro[linha-2][coluna-1] = '0';
					if (tabuleiro[linha-2][coluna+1] == pecas2[i] ) tabuleiro[linha-2][coluna+1] = '0';
					if (tabuleiro[linha+2][coluna-1] == pecas2[i] ) tabuleiro[linha+2][coluna-1] = '0';
					if (tabuleiro[linha+2][coluna+1] == pecas2[i] ) tabuleiro[linha+2][coluna+1] = '0';
				}
				break;
			case 'T':
				for (i = 0; i < 6; i++){
					if (tabuleiro[linha-1][coluna] == pecas2[i]) tabuleiro[linha-1][coluna] = '0';
					if (tabuleiro[linha+1][coluna] == pecas2[i]) tabuleiro[linha+1][coluna] = '0';
					if (tabuleiro[linha][coluna-1] == pecas2[i]) tabuleiro[linha][coluna-1] = '0';
					if (tabuleiro[linha][coluna+1] == pecas2[i]) tabuleiro[linha][coluna+1] = '0';
						
					for (j = coluna - 2; j > 0; j--) {
						if (tabuleiro[linha][j] == pecas2[i] && tabuleiro[linha][j+1] == 'x') tabuleiro[linha][j] = '0';		
					}
					for (j = coluna + 2; j < 14; j++) {
						if (tabuleiro[linha][j] == pecas2[i] && tabuleiro[linha][j-1] == 'x') tabuleiro[linha][j] = '0';
					}
					for (j = linha - 2; j > 0; j--) {
						if (tabuleiro[j][coluna] == pecas2[i] && tabuleiro[j+1][coluna] == 'x') tabuleiro[j][coluna] = '0';
					}
					for (j = linha + 2; j < 14; j++) {
						if (tabuleiro[j][coluna] == pecas2[i] && tabuleiro[j-1][coluna] == 'x') tabuleiro[j][coluna] = '0';
					}
				}
				break;
			case 'B':
				for (b = 0; b < 6; b++){

					if (tabuleiro[linha+1][coluna-1] == pecas2[b]) tabuleiro[linha+1][coluna-1] = '0';
					if (tabuleiro[linha+1][coluna+1] == pecas2[b]) tabuleiro[linha+1][coluna+1] = '0';
					if (tabuleiro[linha-1][coluna-1] == pecas2[b]) tabuleiro[linha-1][coluna-1] = '0';
					if (tabuleiro[linha-1][coluna+1] == pecas2[b]) tabuleiro[linha-1][coluna+1] = '0';
					
					for (i = linha - 2; i > 0; i--) {
						for (j = coluna - 2; j > 0; j--) {
							if (tabuleiro[i][j] == pecas2[b] && tabuleiro[i+1][j+1] == 'x') tabuleiro[i][j] = '0';
						}
					}
					for (i = linha - 2; i > 0; i--) {
						for (j = coluna + 2; j < 14; j++) {
							if (tabuleiro[i][j] == pecas2[b] && tabuleiro[i+1][j-1] == 'x') tabuleiro[i][j] = '0';
						}
					}
					for (i = linha + 2; i < 14; i++) {
						for (j = coluna - 2; j > 0; j--) {
							if (tabuleiro[i][j] == pecas2[b] && tabuleiro[i-1][j+1] == 'x') tabuleiro[i][j] = '0';
						}
					}
					for (i = linha + 2; i < 14; i++) {
						for (j = coluna + 2; j < 14; j++) {
							if (tabuleiro[i][j] == pecas2[b] && tabuleiro[i-1][j-1] == 'x') tabuleiro[i][j] = '0';
						}
					}
				}
				break;
			case 'K':
				for (i = 0; i < 6; i++){
					if (tabuleiro[linha-1][coluna-1] == pecas2[i]) tabuleiro[linha-1][coluna-1] = '0';
					if   (tabuleiro[linha-1][coluna] == pecas2[i]) tabuleiro[linha-1][coluna] = '0';
					if (tabuleiro[linha-1][coluna+1] == pecas2[i]) tabuleiro[linha-1][coluna+1] = '0';
					if   (tabuleiro[linha][coluna-1] == pecas2[i]) tabuleiro[linha][coluna-1] = '0';
					if   (tabuleiro[linha][coluna+1] == pecas2[i]) tabuleiro[linha][coluna+1] = '0';
					if (tabuleiro[linha+1][coluna-1] == pecas2[i]) tabuleiro[linha+1][coluna-1] = '0';
					if   (tabuleiro[linha+1][coluna] == pecas2[i]) tabuleiro[linha+1][coluna] = '0';
					if (tabuleiro[linha+1][coluna+1] == pecas2[i]) tabuleiro[linha+1][coluna+1] = '0';
				}
				break;
			case 'Q':
				for (b = 0; b < 6; b++){
					if (tabuleiro[linha-1][coluna-1] == pecas2[b]) tabuleiro[linha-1][coluna-1] = '0';
					if   (tabuleiro[linha-1][coluna] == pecas2[b]) tabuleiro[linha-1][coluna] = '0';
					if (tabuleiro[linha-1][coluna+1] == pecas2[b]) tabuleiro[linha-1][coluna+1] = '0';
					if   (tabuleiro[linha][coluna-1] == pecas2[b]) tabuleiro[linha][coluna-1] = '0';
					if   (tabuleiro[linha][coluna+1] == pecas2[b]) tabuleiro[linha][coluna+1] = '0';
					if (tabuleiro[linha+1][coluna-1] == pecas2[b]) tabuleiro[linha+1][coluna-1] = '0';
					if   (tabuleiro[linha+1][coluna] == pecas2[b]) tabuleiro[linha+1][coluna] = '0';
					if (tabuleiro[linha+1][coluna+1] == pecas2[b]) tabuleiro[linha+1][coluna+1] = '0';
					
					for (i = coluna - 2; i > 0; i--) {
						if (tabuleiro[linha][i] == pecas2[b] && tabuleiro[linha][i+1] == 'x') tabuleiro[linha][i] = '0';
					}
					for (i = coluna + 2; i < 14; i++) {
						if (tabuleiro[linha][i] == pecas2[b] && tabuleiro[linha][i-1] == 'x') tabuleiro[linha][i] = '0';
					}
					for (i = linha - 2; i > 0; i--) {
						if (tabuleiro[i][coluna] == pecas2[b] && tabuleiro[i+1][coluna] == 'x') tabuleiro[i][coluna] = '0';
					}
					for (i = linha + 2; i < 14; i++) {
						if (tabuleiro[i][coluna] == pecas2[b] && tabuleiro[i-1][coluna] == 'x') tabuleiro[i][coluna] = '0';
					}
					for (i = linha - 2; i > 0; i--) {
						for (j = coluna - 2; j > 0; j--) {
							if (tabuleiro[i][j] == pecas2[b] && tabuleiro[i+1][j+1] == 'x') tabuleiro[i][j] = '0';
						}
					}
					for (i = linha - 2; i > 0; i--) {
						for (j = coluna + 2; j < 14; j++) {
							if (tabuleiro[i][j] == pecas2[b] && tabuleiro[i+1][j-1] == 'x') tabuleiro[i][j] = '0';
						}
					}
					for (i = linha + 2; i < 14; i++) {
						for (j = coluna - 2; j > 0; j--) {
							if (tabuleiro[i][j] == pecas2[b] && tabuleiro[i-1][j+1] == 'x') tabuleiro[i][j] = '0';
						}
					}
					for (i = linha + 2; i < 14; i++) {
						for (j = coluna + 2; j < 14; j++) {
							if (tabuleiro[i][j] == pecas2[b] && tabuleiro[i-1][j-1] == 'x') tabuleiro[i][j] = '0';
						}
					}
				}
				break;
		}

		system("cls");
		imprimeT();

}

void p_comer2 (char peca, int linha, int coluna) {

	int i, j, b;
		switch (peca) {
			case 'p' :
				for (i = 0; i < 6; i++){
					if (tabuleiro[linha+1][coluna-1] == pecas1[i] ) tabuleiro[linha+1][coluna-1] = '0';
					if (tabuleiro[linha+1][coluna+1] == pecas1[i] ) tabuleiro[linha+1][coluna+1] = '0';				}
				break;

			case 'c' :
				for (i = 0; i < 6; i++){
					if (tabuleiro[linha-1][coluna-2] == pecas1[i] ) tabuleiro[linha-1][coluna-2] = '0';
					if (tabuleiro[linha-1][coluna+2] == pecas1[i] ) tabuleiro[linha-1][coluna+2] = '0';
					if (tabuleiro[linha+1][coluna-2] == pecas1[i] ) tabuleiro[linha+1][coluna-2] = '0';
					if (tabuleiro[linha+1][coluna+2] == pecas1[i] ) tabuleiro[linha+1][coluna+2] = '0';
					if (tabuleiro[linha-2][coluna-1] == pecas1[i] ) tabuleiro[linha-2][coluna-1] = '0';
					if (tabuleiro[linha-2][coluna+1] == pecas1[i] ) tabuleiro[linha-2][coluna+1] = '0';
					if (tabuleiro[linha+2][coluna-1] == pecas1[i] ) tabuleiro[linha+2][coluna-1] = '0';
					if (tabuleiro[linha+2][coluna+1] == pecas1[i] ) tabuleiro[linha+2][coluna+1] = '0';
				}
				break;
			case 't':
				for (i = 0; i < 6; i++){
					if (tabuleiro[linha-1][coluna] == pecas1[i]) tabuleiro[linha-1][coluna] = '0';
					if (tabuleiro[linha+1][coluna] == pecas1[i]) tabuleiro[linha+1][coluna] = '0';
					if (tabuleiro[linha][coluna-1] == pecas1[i]) tabuleiro[linha][coluna-1] = '0';
					if (tabuleiro[linha][coluna+1] == pecas1[i]) tabuleiro[linha][coluna+1] = '0';
						
					for (j = coluna - 2; j > 0; j--) {
						if (tabuleiro[linha][j] == pecas1[i] && tabuleiro[linha][j+1] == 'x') tabuleiro[linha][j] = '0';		
					}
					for (j = coluna + 2; j < 14; j++) {
						if (tabuleiro[linha][j] == pecas1[i] && tabuleiro[linha][j-1] == 'x') tabuleiro[linha][j] = '0';
					}
					for (j = linha - 2; j > 0; j--) {
						if (tabuleiro[j][coluna] == pecas1[i] && tabuleiro[j+1][coluna] == 'x') tabuleiro[j][coluna] = '0';
					}
					for (j = linha + 2; j < 14; j++) {
						if (tabuleiro[j][coluna] == pecas1[i] && tabuleiro[j-1][coluna] == 'x') tabuleiro[j][coluna] = '0';
					}
				}
				break;
			case 'b':
				for (b = 0; b < 6; b++){

					if (tabuleiro[linha+1][coluna-1] == pecas1[b]) tabuleiro[linha+1][coluna-1] = '0';
					if (tabuleiro[linha+1][coluna+1] == pecas1[b]) tabuleiro[linha+1][coluna+1] = '0';
					if (tabuleiro[linha-1][coluna-1] == pecas1[b]) tabuleiro[linha-1][coluna-1] = '0';
					if (tabuleiro[linha-1][coluna+1] == pecas1[b]) tabuleiro[linha-1][coluna+1] = '0';
					
					for (i = linha - 2; i > 0; i--) {
						for (j = coluna - 2; j > 0; j--) {
							if (tabuleiro[i][j] == pecas1[b] && tabuleiro[i+1][j+1] == 'x') tabuleiro[i][j] = '0';
						}
					}
					for (i = linha - 2; i > 0; i--) {
						for (j = coluna + 2; j < 14; j++) {
							if (tabuleiro[i][j] == pecas1[b] && tabuleiro[i+1][j-1] == 'x') tabuleiro[i][j] = '0';
						}
					}
					for (i = linha + 2; i < 14; i++) {
						for (j = coluna - 2; j > 0; j--) {
							if (tabuleiro[i][j] == pecas1[b] && tabuleiro[i-1][j+1] == 'x') tabuleiro[i][j] = '0';
						}
					}
					for (i = linha + 2; i < 14; i++) {
						for (j = coluna + 2; j < 14; j++) {
							if (tabuleiro[i][j] == pecas1[b] && tabuleiro[i-1][j-1] == 'x') tabuleiro[i][j] = '0';
						}
					}
				}
				break;
			case 'k':
				for (i = 0; i < 6; i++){
					if (tabuleiro[linha-1][coluna-1] == pecas1[i]) tabuleiro[linha-1][coluna-1] = '0';
					if   (tabuleiro[linha-1][coluna] == pecas1[i]) tabuleiro[linha-1][coluna] = '0';
					if (tabuleiro[linha-1][coluna+1] == pecas1[i]) tabuleiro[linha-1][coluna+1] = '0';
					if   (tabuleiro[linha][coluna-1] == pecas1[i]) tabuleiro[linha][coluna-1] = '0';
					if   (tabuleiro[linha][coluna+1] == pecas1[i]) tabuleiro[linha][coluna+1] = '0';
					if (tabuleiro[linha+1][coluna-1] == pecas1[i]) tabuleiro[linha+1][coluna-1] = '0';
					if   (tabuleiro[linha+1][coluna] == pecas1[i]) tabuleiro[linha+1][coluna] = '0';
					if (tabuleiro[linha+1][coluna+1] == pecas1[i]) tabuleiro[linha+1][coluna+1] = '0';
				}
				break;
			case 'q':
				for (b = 0; b < 6; b++){
					if (tabuleiro[linha-1][coluna-1] == pecas1[b]) tabuleiro[linha-1][coluna-1] = '0';
					if   (tabuleiro[linha-1][coluna] == pecas1[b]) tabuleiro[linha-1][coluna] = '0';
					if (tabuleiro[linha-1][coluna+1] == pecas1[b]) tabuleiro[linha-1][coluna+1] = '0';
					if   (tabuleiro[linha][coluna-1] == pecas1[b]) tabuleiro[linha][coluna-1] = '0';
					if   (tabuleiro[linha][coluna+1] == pecas1[b]) tabuleiro[linha][coluna+1] = '0';
					if (tabuleiro[linha+1][coluna-1] == pecas1[b]) tabuleiro[linha+1][coluna-1] = '0';
					if   (tabuleiro[linha+1][coluna] == pecas1[b]) tabuleiro[linha+1][coluna] = '0';
					if (tabuleiro[linha+1][coluna+1] == pecas1[b]) tabuleiro[linha+1][coluna+1] = '0';
					
					for (i = coluna - 2; i > 0; i--) {
						if (tabuleiro[linha][i] == pecas1[b] && tabuleiro[linha][i+1] == 'x') tabuleiro[linha][i] = '0';
					}
					for (i = coluna + 2; i < 14; i++) {
						if (tabuleiro[linha][i] == pecas1[b] && tabuleiro[linha][i-1] == 'x') tabuleiro[linha][i] = '0';
					}
					for (i = linha - 2; i > 0; i--) {
						if (tabuleiro[i][coluna] == pecas1[b] && tabuleiro[i+1][coluna] == 'x') tabuleiro[i][coluna] = '0';
					}
					for (i = linha + 2; i < 14; i++) {
						if (tabuleiro[i][coluna] == pecas1[b] && tabuleiro[i-1][coluna] == 'x') tabuleiro[i][coluna] = '0';
					}
					for (i = linha - 2; i > 0; i--) {
						for (j = coluna - 2; j > 0; j--) {
							if (tabuleiro[i][j] == pecas1[b] && tabuleiro[i+1][j+1] == 'x') tabuleiro[i][j] = '0';
						}
					}
					for (i = linha - 2; i > 0; i--) {
						for (j = coluna + 2; j < 14; j++) {
							if (tabuleiro[i][j] == pecas1[b] && tabuleiro[i+1][j-1] == 'x') tabuleiro[i][j] = '0';
						}
					}
					for (i = linha + 2; i < 14; i++) {
						for (j = coluna - 2; j > 0; j--) {
							if (tabuleiro[i][j] == pecas1[b] && tabuleiro[i-1][j+1] == 'x') tabuleiro[i][j] = '0';
						}
					}
					for (i = linha + 2; i < 14; i++) {
						for (j = coluna + 2; j < 14; j++) {
							if (tabuleiro[i][j] == pecas1[b] && tabuleiro[i-1][j-1] == 'x') tabuleiro[i][j] = '0';
						}
					}
				}
				break;
		}

		system("cls");
		imprimeT();
}
void p_roque(char peca, int linha, int coluna) {
	int i, j;

	switch(peca) {
		case 'K':
			if   (tabuleiro[linha][coluna+3] == 'T' && tabuleiro[linha][coluna+1] == 'x' && tabuleiro[linha][coluna+2] == ' ') tabuleiro[linha][coluna+3] = 'R';
			break;
		//case 'k':
			//if   (tabuleiro[linha][coluna+3] == 't' && tabuleiro[linha][coluna+1] == 'x' && tabuleiro[linha][coluna+2] == ' ') tabuleiro[linha][coluna+3] = 'R';
		//	break;
	}
	system("cls");
	imprimeT();
}


void roque(int linha, int coluna, int linha1, int coluna1, char peca) {
	

	if (tabuleiro[linha1][coluna1] == 'R') { 
		switch(peca) {
			case 'K':
				tabuleiro[linha1][coluna1-1] = tabuleiro[linha][coluna];
				tabuleiro[linha][coluna] = ' ';
				tabuleiro[linha][coluna+1] = 'T';
				tabuleiro[linha1][coluna1] = ' ';
				break;
			case 'k':
				tabuleiro[linha1][coluna1-1] = tabuleiro[linha][coluna];
				tabuleiro[linha][coluna] = ' ';
				tabuleiro[linha][coluna+1] = 't';
				tabuleiro[linha1][coluna1] = ' ';
				break;
			}
	
		limpa_0();
		limpa_x();
		limpa_R();

		system("cls");
		imprimeT();

		int i, j;

		for (i = 0; i < 14; i++) {
			for (j = 0; j < 14; j++) {
				tabuleiro1[i][j] = tabuleiro[i][j];
			}
		}
	}
}

char define_peca1(int linha, int coluna) {

	char peca;
	
	switch(tabuleiro[linha][coluna]) {
		case 'P': peca = 'P'; break;
		case 'T': peca = 'T'; break;
		case 'C': peca = 'C'; break;
		case 'B': peca = 'B'; break;
		case 'Q': peca = 'Q'; break;
		case 'K': peca = 'K'; break;
		default: peca = 'N'; break;
	}
	
	return peca;
}

char define_peca2(int linha, int coluna) {

	char peca;
	
	switch(tabuleiro[linha][coluna]) {
		case 'p': peca = 'p'; break;
		case 't': peca = 't'; break;
		case 'c': peca = 'c'; break;
		case 'b': peca = 'b'; break;
		case 'q': peca = 'q'; break;
		case 'k': peca = 'k'; break;
		default: peca = 'N'; break;
	}
	
	return peca;
}

int main() {
	
	int linha, coluna, linha1, coluna1; 
	char peca;	
	menu ();


	while (cheque_mate2() == 1 && cheque_mate1() == 1) {

		do {
			system("cls");
			imprimeT();
			if (peca == 'N') {
				printf("Peca nao encontrada.\n\n");
			}
			printf("Jogador 1:\nDigite a posicao da peca que deseja mover (primeiro a linha, depois a coluna):\n");
			scanf("%d %d", &linha, &coluna);
			linha+=2; coluna+=2;
			peca = define_peca1(linha, coluna);
		} while (peca == 'N');
		
		p_movimento1(peca, linha, coluna);
		p_comer1(peca, linha, coluna);
		p_roque(peca, linha, coluna);

		start1:if (verifica_x() == 1) {
			if (verifica_0() == 1) {
				if (verifica_r() == 1) {
					printf("Digite a posicao que voce quer mover:\n");
					scanf("%d %d", &linha1, &coluna1);
					linha1+=2; coluna1+=2;
					if (tabuleiro[linha1][coluna1] == 'R') { 
						roque(linha, coluna, linha1, coluna1, peca);
						levelup();
					}
					else if (tabuleiro[linha1][coluna1] == '0') { 
						comer1(linha, coluna, linha1, coluna1);
						levelup();
					}
					else{
						movimento1(linha, coluna, linha1, coluna1);
						levelup();	
					}
				}
				else {
					printf("Digite a posicao que voce quer mover:\n");
					scanf("%d %d", &linha1, &coluna1);
					linha1+=2; coluna1+=2;
					if (tabuleiro[linha1][coluna1] == '0') { 
						comer1(linha, coluna, linha1, coluna1);
						levelup();
					}
					else{
						movimento1(linha, coluna, linha1, coluna1);
						levelup();	
					}
				}
			}

			else if(verifica_r() == 1) {
				printf("Digite a posicao que voce quer mover:\n");
				scanf("%d %d", &linha1, &coluna1);
				linha1+=2; coluna1+=2;
				if (tabuleiro[linha1][coluna1] == 'R') { 
					roque(linha, coluna, linha1, coluna1, peca);
					levelup();
				}
				else{
					movimento1(linha, coluna, linha1, coluna1);
					levelup();	
				}
			}

			else {
				printf("Digite a posicao que voce quer mover:\n");
				scanf("%d %d", &linha1, &coluna1);
				linha1+=2; coluna1+=2;
				movimento1(linha, coluna, linha1, coluna1);
				levelup();	
			}

		} else {

			if (verifica_0() == 1) {
				printf("Digite a posicao que voce quer mover:\n");
				scanf("%d %d", &linha1, &coluna1);
				linha1+=2; coluna1+=2;
				comer1(linha, coluna, linha1, coluna1);
				levelup();	
			}
			else{
				do{
					printf("A peca nao pode ser mexida\n");
					sleep(2);
					printf("Jogador 1:\nDigite a posicao da peca que deseja mover (primeiro a linha, depois a coluna):\n");
					scanf("%d %d", &linha, &coluna);
					linha+=2; coluna+=2;
					peca = define_peca1(linha, coluna);
					p_roque(peca, linha, coluna);
					p_movimento1(peca, linha, coluna);
					p_comer1(peca, linha, coluna);
					goto start1;
				} while (verifica_x() != 1 || verifica_r() != 1 || verifica_0() != 1);
			}
		}

		if (cheque_mate2() == 0 && cheque_mate1() == 1) {
				system("cls");	
				printf(" ________             ___  ________  ________  ________  ________  ________  ________          ___          ________  ________  ________   ___  ___  ________  ___  ___     \n|\\   __  \\           |\\  \\|\\   __  \\|\\   ____\\|\\   __  \\|\\   ___ \\|\\   __  \\|\\   __  \\        |\\  \\        |\\   ____\\|\\   __  \\|\\   ___  \\|\\  \\|\\  \\|\\   __  \\|\\  \\|\\  \\    \n\\ \\  \\|\\  \\          \\ \\  \\ \\  \\|\\  \\ \\  \\___|\\ \\  \\|\\  \\ \\  \\_|\\ \\ \\  \\|\\  \\ \\  \\|\\  \\       \\ \\  \\       \\ \\  \\___|\\ \\  \\|\\  \\ \\  \\\\ \\  \\ \\  \\\\\\  \\ \\  \\|\\  \\ \\  \\\\\\  \\   \n \\ \\  \\\\\\  \\       __ \\ \\  \\ \\  \\\\\\  \\ \\  \\  __\\ \\   __  \\ \\  \\ \\\\ \\ \\  \\\\\\  \\ \\   _  _\\       \\ \\  \\       \\ \\  \\  __\\ \\   __  \\ \\  \\\\ \\  \\ \\   __  \\ \\  \\\\\\  \\ \\  \\\\\\  \\  \n  \\ \\  \\\\\\  \\     |\\  \\\\_\\  \\ \\  \\\\\\  \\ \\  \\|\\  \\ \\  \\ \\  \\ \\  \\_\\\\ \\ \\  \\\\\\  \\ \\  \\\\  \\|       \\ \\  \\       \\ \\  \\|\\  \\ \\  \\ \\  \\ \\  \\\\ \\  \\ \\  \\ \\  \\ \\  \\\\\\  \\ \\  \\\\\\  \\ \n   \\ \\_______\\    \\ \\________\\ \\_______\\ \\_______\\ \\__\\ \\__\\ \\_______\\ \\_______\\ \\__\\\\ _\\        \\ \\__\\       \\ \\_______\\ \\__\\ \\__\\ \\__\\\\ \\__\\ \\__\\ \\__\\ \\_______\\ \\_______\\\n    \\|_______|     \\|________|\\|_______|\\|_______|\\|__|\\|__|\\|_______|\\|_______|\\|__|\\|__|        \\|__|        \\|_______|\\|__|\\|__|\\|__| \\|__|\\|__|\\|__|\\|_______|\\|_______|\n\n");
				return 0;
			}

		do {
			system("cls");
			imprimeT();
			if (peca == 'N') {
				printf("Peca nao encontrada.\n\n");
			}
			printf("Jogador 2:\nDigite a posicao da peca que deseja mover (primeiro a linha, depois a coluna):\n");
			scanf("%d %d", &linha, &coluna);
			linha+=2; coluna+=2;
			peca = define_peca2(linha, coluna);
		} while (peca == 'N');
		p_roque(peca, linha, coluna);
		p_movimento1(peca, linha, coluna);
		p_comer2(peca, linha, coluna);

		start2:if (verifica_x() == 1) {
			if (verifica_0() == 1) {
				if (verifica_r() == 1) {
					printf("Digite a posicao que voce quer mover:\n");
					scanf("%d %d", &linha1, &coluna1);
					linha1+=2; coluna1+=2;
					if (tabuleiro[linha1][coluna1] == 'R') { 
						roque(linha, coluna, linha1, coluna1, peca);
						levelup();
					}
					else if (tabuleiro[linha1][coluna1] == '0') { 
						comer1(linha, coluna, linha1, coluna1);
						levelup();
					}
					else{
						movimento1(linha, coluna, linha1, coluna1);
						levelup();	
					}
				}
				else {
					printf("Digite a posicao que voce quer mover:\n");
					scanf("%d %d", &linha1, &coluna1);
					linha1+=2; coluna1+=2;
					if (tabuleiro[linha1][coluna1] == '0') { 
						comer1(linha, coluna, linha1, coluna1);
						levelup();
					}
					else{
						movimento1(linha, coluna, linha1, coluna1);
						levelup();	
					}
				}
			}

			else if(verifica_r() == 1) {
				printf("Digite a posicao que voce quer mover:\n");
				scanf("%d %d", &linha1, &coluna1);
				linha1+=2; coluna1+=2;
				if (tabuleiro[linha1][coluna1] == 'R') { 
					roque(linha, coluna, linha1, coluna1, peca);
					levelup();
				}
				else{
					movimento1(linha, coluna, linha1, coluna1);
					levelup();	
				}
			}

			else {
				printf("Digite a posicao que voce quer mover:\n");
				scanf("%d %d", &linha1, &coluna1);
				linha1+=2; coluna1+=2;
				movimento1(linha, coluna, linha1, coluna1);
				levelup();	
			}

		} else {

			if (verifica_0() == 1) {
				printf("Digite a posicao que voce quer mover:\n");
				scanf("%d %d", &linha1, &coluna1);
				linha1+=2; coluna1+=2;
				comer1(linha, coluna, linha1, coluna1);
				levelup();	
			}
			else{
				do{
					printf("A peca nao pode ser mexida\n");
					sleep(2);
					printf("Jogador 2:\nDigite a posicao da peca que deseja mover (primeiro a linha, depois a coluna):\n");
					scanf("%d %d", &linha, &coluna);
					linha+=2; coluna+=2;
					peca = define_peca2(linha, coluna);
					p_roque(peca, linha, coluna);
					p_movimento1(peca, linha, coluna);
					p_comer2(peca, linha, coluna);
					goto start2;
				} while (verifica_x() != 1 || verifica_r() != 1 || verifica_0() != 1);


			}
		}
			if (cheque_mate1() == 0 && cheque_mate2() == 1) {
				system("cls");
				printf(" ________             ___  ________  ________  ________  ________  ________  ________          ___  ___          ________  ________  ________   ___  ___  ________  ___  ___\n|\\   __  \\           |\\  \\|\\   __  \\|\\   ____\\|\\   __  \\|\\   ___ \\|\\   __  \\|\\   __  \\        |\\  \\|\\  \\        |\\   ____\\|\\   __  \\|\\   ___  \\|\\  \\|\\  \\|\\   __  \\|\\  \\|\\  \\\n\\ \\  \\|\\  \\          \\ \\  \\ \\  \\|\\  \\ \\  \\___|\\ \\  \\|\\  \\ \\  \\_|\\ \\ \\  \\|\\  \\ \\  \\|\\  \\       \\ \\  \\ \\  \\       \\ \\  \\___|\\ \\  \\|\\  \\ \\  \\\\ \\  \\ \\  \\\\\\  \\ \\  \\|\\  \\ \\  \\\\\\  \\\n \\ \\  \\\\\\  \\       __ \\ \\  \\ \\  \\\\\\  \\ \\  \\  __\\ \\   __  \\ \\  \\ \\\\ \\ \\  \\\\\\  \\ \\   _  _\\       \\ \\  \\ \\  \\       \\ \\  \\  __\\ \\   __  \\ \\  \\\\ \\  \\ \\   __  \\ \\  \\\\\\  \\ \\  \\\\\\  \\\n  \\ \\  \\\\\\  \\     |\\  \\\\_\\  \\ \\  \\\\\\  \\ \\  \\|\\  \\ \\  \\ \\  \\ \\  \\_\\\\ \\ \\  \\\\\\  \\ \\  \\\\  \\|       \\ \\  \\ \\  \\       \\ \\  \\|\\  \\ \\  \\ \\  \\ \\  \\\\ \\  \\ \\  \\ \\  \\ \\  \\\\\\  \\ \\  \\\\\\  \\\n   \\ \\_______\\    \\ \\________\\ \\_______\\ \\_______\\ \\__\\ \\__\\ \\_______\\ \\_______\\ \\__\\\\ _\\        \\ \\__\\ \\__\\       \\ \\_______\\ \\__\\ \\__\\ \\__\\\\ \\__\\ \\__\\ \\__\\ \\_______\\ \\_______\\\n    \\|_______|     \\|________|\\|_______|\\|_______|\\|__|\\|__|\\|_______|\\|_______|\\|__|\\|__|        \\|__|\\|__|        \\|_______|\\|__|\\|__|\\|__| \\|__|\\|__|\\|__|\\|_______|\\|_______|\n\n");
				return 0;
			}
	}

	
	return 0;
}