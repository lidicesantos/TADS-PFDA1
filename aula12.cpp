#include <conio.h>
#include <stdlib.h>        //biblioteca
#include <stdio.h>
#include <locale.h>    //

int main()
{
		
	setlocale(LC_ALL, "Portuguese");    //para incluir texto em portugues com acento
	float notaUm;
	float notaDois;
	float media;
	
	
	printf("Digite a primeira nota...: ");
	scanf ("%f", &notaUm);
	
	printf("Digite a segunda nota...: ");
	scanf("%f", &notaDois);
	
	media = (notaUm + notaDois) / 2;
	
	printf ("A sua média é: %.2f", media);
	getch(); //pausa a tela
	
}



/******** operadores matematicos
* = multiplicacao
/ = divisão


