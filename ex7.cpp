/* 
Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e
mostre:
a) a idade dessa pessoa;
b) a idade dessa pessoa em meses;
c) a idade dessa pessoa em dias;
d) a idade dessa pessoa em semanas.
*/



#include <conio.h>
#include <stdlib.h>       
#include <stdio.h>
#include <locale.h>    


int main()
{
		
	setlocale(LC_ALL, "Portuguese");    
	int anoNascimento, anoAtual, idade, idadeMeses, idadeSemanas, idadeDias;
	
	
	printf("Digite o ano de seu nascimento ...: ");
	scanf("%i", &anoNascimento);
	
	printf("Digite o ano atual ...: ");
	scanf("%i", &anoAtual);
	
	idade = anoAtual - anoNascimento;
	idadeMeses = idade * 12;
	idadeDias = idadeMeses * 365;
	idadeSemanas = idadeDias / 7;

	
	 	
	printf("A sua idade é %i, %i meses, %i semanas e %i dias !", idade, idadeMeses, idadeSemanas, idadeDias);
	
	getch();
	
}
