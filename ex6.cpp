/*  Fa�a um algoritmo que receba o sal�rio de um funcion�rio, calcule e mostre o novo sal�rio,
sabendo-se que este sofreu um reajuste de 25%. */

#include <conio.h>
#include <stdlib.h>       
#include <stdio.h>
#include <locale.h>    


int main()
{
		
	setlocale(LC_ALL, "Portuguese");    
	float salarioAtual, novoSalario, reajuste;
	
	
	printf("Digite o sal�rio atual ...: ");
	scanf("%f", &salarioAtual);
	
	reajuste = (salarioAtual * 0.25);
	novoSalario = salarioAtual + reajuste;

	
	 	
	printf("O novo sal�rio � %.2f !", novoSalario);
	
	getch();
	
}
