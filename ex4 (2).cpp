/*Leia um grau Celsius e calcule seu equivalente em Fahrenheit, utilizando a fórmula:
F = (ºC*1.8)+32 */


#include <conio.h>
#include <stdlib.h>        //biblioteca
#include <stdio.h>
#include <locale.h>    //


int main()
{
		
	setlocale(LC_ALL, "Portuguese");    
	float celsius, fahrenheint;
	
	
	printf("Digite a temperatura em Celsius ...: ");
	scanf("%f", &celsius);
	
    fahrenheint = (celsius * 1.8) + 32;
	
	 	
	printf("A tempperatura em fahrenheint é %.2f !", fahrenheint);
	
	getch();
	
}

