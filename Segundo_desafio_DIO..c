/*consiste em uma criação de uma calculadora de partidas rankeadas,
 que para isto pode ser utilizado variáveis, operadores, laços de repetição,
 estruturas de decisões e funções, sendo que estas devem ser utilizadas para
 retonar o saldo de vitorias ou derrotas, e através deste saldo o jogador será
  ranqueado de acordo com o número de vitorias que ele possui, será caracterizado o nível do jogador.
  Autor : Paulo fernando.
  */
#include <stdio.h> //biblioteca
#include <conio.h> //biblioteca
#include <locale.h> //tratamento de String
#include <math.h> //biblioteca matemática
#include <string.h>
#include <windows.h> //biblioteca de operações com String
#include <stdlib.h>
#include <time.h>

int main() {

	setlocale(LC_ALL,"Portuguese");
	system ("color 3E");

	int resultado;
	char nivel;
	
	resultado = rank();	
	if(resultado<10)                      printf("O herói tem saldo inferior a 10 vitorias e está no nível FERRO.");
	if(resultado>10  && resultado<=20)    printf("O herói tem saldo %d vitorias e está no nível BRONZE;", resultado);
	if(resultado>20  && resultado<=50)    printf("O herói tem saldo %d vitorias e está no nível PRATA.", resultado);
	if(resultado>50  && resultado<=80)    printf("O herói tem saldo %d vitorias e está no nível OURO.", resultado);
	if(resultado>80  && resultado<=90)    printf("O herói tem saldo %d vitorias e está no nível DIAMANTE.", resultado);
	if(resultado>90  && resultado<=100)   printf("O herói tem saldo %d vitorias e está no nível LENDÁRIO.", resultado);
	if(resultado>100)                     printf("O herói tem saldo %d vitorias e está no nível IMORTAL.", resultado);
	
	return 0;
	
	}

	int rank(int vit, int der) {

		srand(time(NULL) );//retira o valor do relogio de tempo real
		vit = rand()%100 + 1;
		der = rand()%100;

		int scor;
		scor = vit - der;

		return(scor);
	}




