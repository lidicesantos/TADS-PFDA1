#include <conio.h>
#include <stdlib.h>        //biblioteca
#include <stdio.h>
#include <locale.h>    //

int main()
{
		
	setlocale(LC_ALL, "Portuguese");    //para incluir texto em portugues com acento
	int numero, resto;
	
	
	printf("Digite um numero...: ");
	scanf ("%i", &numero);
	
		
	resto = numero % 2;
	
	printf ("O resto do numero... � %i", resto);
	getch(); //pausa a tela
	
}

/* Operadores Logicos
======================
&&     (E)     ==>> ambos tem q ser verdadeiro para o resultado ser verdade
||     (OU)    ==>> basta q um seja verdadeiro para q o resultado seja verdadeiro
!      (N�O)   ===>> Vai negar o que vc esta afirmando

Estruturas de Sele��o
=====================

if = Testa um condi��o
     S� entra dentro do bloco do IF se a condi��o dele for verdadeira
     
     exemplo:
     ......
     if(condicao)
     {
         .......
     }
     ......

