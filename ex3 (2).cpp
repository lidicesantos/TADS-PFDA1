/*  Fa�a um programa que pe�a dois n�meros, base e expoente, calcule e mostre o primeiro n�mero
elevado ao segundo n�mero */


#include <conio.h>
#include <stdlib.h>       
#include <stdio.h>
#include <locale.h>    
#include <math.h>

int main()
{
		
	setlocale(LC_ALL, "Portuguese");    
	int base, expoente, resultado;
	
	
	printf("Digite o primeiro n�mero ...: ");
	scanf("%i", &base);
	
	printf("Digite o segundo n�mero ...: ");
	scanf("%i", &expoente);
	
	resultado = pow(base,expoente);
  	 	
	printf("O resultado de %i elevado a %i � %i !", base, expoente, resultado);
	
	getch();
	
}
