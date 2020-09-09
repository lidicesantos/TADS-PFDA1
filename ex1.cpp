#include <conio.h>
#include <stdlib.h>        
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int A;
	
	printf("Digite um número...:  ");
	scanf("%i", &A);
	
	if (A%2 == 0)
	{ 
	 	printf("O numero é IMPAR");
	}
	else 
	{
		printf("O numero é PAR");
	}
	getch();
}
