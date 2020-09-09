// Leia um número e retorne o dobro e o seu quadrado.

#include <conio.h>
#include <stdlib.h>        //biblioteca
#include <stdio.h>
#include <locale.h>    //


int main()
{
		
	setlocale(LC_ALL, "Portuguese");    
	int numero, dobro, quadrado;
	
	
	printf("Digite um número...: ");
	scanf("%i", &numero);
	
	dobro = numero * 2;
	quadrado = numero * numero;
	
	 	
	printf("O dobro de %i é %i e o quadrado é %i !", numero, dobro, quadrado);
	
	getch();
	
}
