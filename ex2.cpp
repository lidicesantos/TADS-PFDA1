#include <conio.h>
#include <stdlib.h>        
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int A;
	
	printf("Digite um n�mero...:  ");
	scanf("%i", &A);
	
	if (A%3 == 0) {
	printf("O n�mero %i � m�ltiplo de 3", A); 
	}
	else{
		printf("O n�mero %i n�o � m�ltiplo de 3", A);
	}
	getch ();
	
}
