#include <conio.h>
#include <stdlib.h>        //biblioteca
#include <stdio.h>
#include <locale.h>    //

int main()
{
	int idade;   // armazena n�meros inteiros
	char bloco;   //armazena 1 caractere
	char nome[50]; //at� 50 caracteres
	float nota;  // armazena numeros com casa decimal
	int segundoSemestre;
	char endereco[100];
	
	setlocale(LC_ALL, "Portuguese");    //para incluir texto em portugues com acento
	printf("Digite uma nota");  //imprimir na tela - da�da de dadps
	scanf("%f", &nota); // entrada/leitura de dados
	
	printf("Digite a idade ..:  ");
	scanf("%i", &idade);
	
	
	printf("A nota digitada �: %f e a idade � %i", nota, idade);
	getch(); //pausa a tela
	
}
