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
	
	if (A%3 == 0 && A%5 == 0) {
	printf("O n�mero %i � m�ltiplo de 3 e 5", A); 
	}
	else{
		printf("O n�mero %i n�o � m�ltiplo de 3 e 5", A);
	}
	getch ();
	
}
