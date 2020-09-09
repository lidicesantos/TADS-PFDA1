#include <conio.h>
#include <stdlib.h>        
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int opcao;
	
	printf("Menu de Opções: \n");
	printf("1-Cadastrar\n");
	printf("2-Listar\n");
	printf("3-Sair\n\n");
	printf("Escolha uma opção: ");
	scanf("%i", &opcao);
	
	switch(opcao)
	{
		case 1: printf("Estou no módulo de CADASTRO");
				break;
		case 2: printf("Estou no módulo de LISTAGEM DE DADOS");
				break;
		case 3: printf("Saindo do Sistema");
				break;
		default: printf("Usuario sua anta...");
				break;
		}
	getch();	
}
