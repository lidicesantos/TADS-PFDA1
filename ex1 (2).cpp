// Elaborar um algoritmo para calcular e apresentar o volume de uma lata de óleo, utilizando a
// fórmula: VOLUME = 3.14159 * (R*R) * ALTURA

#include <conio.h>
#include <stdlib.h>        //biblioteca
#include <stdio.h>
#include <locale.h>    //



int main()
{
		
	setlocale(LC_ALL, "Portuguese");    
	float raio, altura, volume;
	
	
	printf("Digite o raio...: ");
	scanf("%f", &raio);
	
	
	printf("\n Digite a altura...: ");
	scanf("%f", &altura);
	
	volume = (3.14159 * (raio*raio) * altura);
	
	 	
	printf("O volume da lata... é %.2f", volume);
	
	getch();
	
}
