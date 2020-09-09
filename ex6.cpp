/*  Faça um algoritmo que receba o salário de um funcionário, calcule e mostre o novo salário,
sabendo-se que este sofreu um reajuste de 25%. */

#include <conio.h>
#include <stdlib.h>       
#include <stdio.h>
#include <locale.h>    


int main()
{
		
	setlocale(LC_ALL, "Portuguese");    
	float salarioAtual, novoSalario, reajuste;
	
	
	printf("Digite o salário atual ...: ");
	scanf("%f", &salarioAtual);
	
	reajuste = (salarioAtual * 0.25);
	novoSalario = salarioAtual + reajuste;

	
	 	
	printf("O novo salário é %.2f !", novoSalario);
	
	getch();
	
}
