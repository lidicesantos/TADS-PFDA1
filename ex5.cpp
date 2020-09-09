/* Calcule o sal�rio l�quido de um funcion�rio, sabendo que sobre o sal�rio bruto, incide-se um
desconto de 8,5% para a previd�ncia e sobre o restante, tem-se um desconto de 27,5% para o IR. Leia
o sal�rio bruto e mostre o sal�rio l�quido, o IR e a previd�ncia. */

#include <conio.h>
#include <stdlib.h>        
#include <stdio.h>
#include <locale.h>    


int main()
{
		
	setlocale(LC_ALL, "Portuguese");    
	float salarioLiquido, salarioBruto, previdencia, impostoDeRenda;
	
	
	printf("Digite o sal�rio bruto ...: ");
	scanf("%f", &salarioBruto);
	
    previdencia = salarioBruto * (8.5 / 100);
    impostoDeRenda = ((salarioBruto - previdencia) * (27.5 / 100));
    salarioLiquido = salarioBruto - previdencia - impostoDeRenda;
	 	
	printf("O sal�rio l�quido � %.2f !", salarioLiquido);
	
	getch();
	
}
