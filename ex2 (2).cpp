// Leia um n�mero e retorne o dobro e o seu quadrado.

#include <conio.h>
#include <stdlib.h>        //biblioteca
#include <stdio.h>
#include <locale.h>    //


int main()
{
		
	setlocale(LC_ALL, "Portuguese");    
	int numero, dobro, quadrado;
	
	
	printf("Digite um n�mero...: ");
	scanf("%i", &numero);
	
	dobro = numero * 2;
	quadrado = numero * numero;
	
	 	
	printf("O dobro de %i � %i e o quadrado � %i !", numero, dobro, quadrado);
	
	getch();
	
}
