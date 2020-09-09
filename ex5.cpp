/* Calcule o salário líquido de um funcionário, sabendo que sobre o salário bruto, incide-se um
desconto de 8,5% para a previdência e sobre o restante, tem-se um desconto de 27,5% para o IR. Leia
o salário bruto e mostre o salário líquido, o IR e a previdência. */

#include <conio.h>
#include <stdlib.h>        
#include <stdio.h>
#include <locale.h>    


int main()
{
		
	setlocale(LC_ALL, "Portuguese");    
	float salarioLiquido, salarioBruto, previdencia, impostoDeRenda;
	
	
	printf("Digite o salário bruto ...: ");
	scanf("%f", &salarioBruto);
	
    previdencia = salarioBruto * (8.5 / 100);
    impostoDeRenda = ((salarioBruto - previdencia) * (27.5 / 100));
    salarioLiquido = salarioBruto - previdencia - impostoDeRenda;
	 	
	printf("O salário líquido é %.2f !", salarioLiquido);
	
	getch();
	
}
