/*  Faça um programa que peça dois números, base e expoente, calcule e mostre o primeiro número
elevado ao segundo número */


#include <conio.h>
#include <stdlib.h>       
#include <stdio.h>
#include <locale.h>    
#include <math.h>

int main()
{
		
	setlocale(LC_ALL, "Portuguese");    
	int base, expoente, resultado;
	
	
	printf("Digite o primeiro número ...: ");
	scanf("%i", &base);
	
	printf("Digite o segundo número ...: ");
	scanf("%i", &expoente);
	
	resultado = pow(base,expoente);
  	 	
	printf("O resultado de %i elevado a %i é %i !", base, expoente, resultado);
	
	getch();
	
}
