#include <conio.h>
#include <stdlib.h>        
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int opcao;
	
	printf("Menu de Op��es: \n");
	printf("1-Cadastrar\n");
	printf("2-Listar\n");
	printf("3-Sair\n\n");
	printf("Escolha uma op��o: ");
	scanf("%i", &opcao);
	
	switch(opcao)
	{
		case 1: printf("Estou no m�dulo de CADASTRO");
				break;
		case 2: printf("Estou no m�dulo de LISTAGEM DE DADOS");
				break;
		case 3: printf("Saindo do Sistema");
				break;
		default: printf("Usuario sua anta...");
				break;
		}
	getch();	
}
