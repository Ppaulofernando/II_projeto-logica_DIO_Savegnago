#include <stdio.h> //biblioteca
#include <conio.h> //biblioteca
#include <locale.h> //tratamento de String
#include <math.h> //biblioteca matem�tica
#include <string.h>
#include <windows.h> //biblioteca de opera��es com String
#include <stdlib.h>
#include <time.h>

int main() {

	setlocale(LC_ALL,"Portuguese");
	system ("color 3E");

	int resultado;
	char nivel;
	
	resultado = rank();	
	if(resultado<10)                      printf("O her�i tem saldo inferior a 10 vitorias e est� no n�vel FERRO.");
	if(resultado>10  && resultado<=20)    printf("O her�i tem saldo %d vitorias e est� no n�vel BRONZE;", resultado);
	if(resultado>20  && resultado<=50)    printf("O her�i tem saldo %d vitorias e est� no n�vel PRATA.", resultado);
	if(resultado>50  && resultado<=80)    printf("O her�i tem saldo %d vitorias e est� no n�vel OURO.", resultado);
	if(resultado>80  && resultado<=90)    printf("O her�i tem saldo %d vitorias e est� no n�vel DIAMANTE.", resultado);
	if(resultado>90  && resultado<=100)   printf("O her�i tem saldo %d vitorias e est� no n�vel LEND�RIO.", resultado);
	if(resultado>100)                     printf("O her�i tem saldo %d vitorias e est� no n�vel IMORTAL.", resultado);
	
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




