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
	
	if (A%3 == 0) {
	printf("O número %i é múltiplo de 3", A); 
	}
	else{
		printf("O número %i não é múltiplo de 3", A);
	}
	getch ();
	
}
