#include <iostream>
#include <stdio.h>

int A=0;
int B=0;
char op;  

int main() 
{

printf("Informe um numero inteiro A:\n");

scanf("%i",&A);

printf("Informe um numero inteiro B:\n");

scanf("%i",&B);
printf("\n\n");

printf("Informe a operacao desejada: + = 1, - = 2 , / = 3, * = 4 \n");
scanf("%i",&op);

if(op == 1){
	op=A+B;
	
	printf ("A soma e = %i\n",op);	
	 }
else
if (op == 2)	{
	op=A-B;
	printf("A substracao e = %i\n",op);
		}
else
if (op == 3){
	op=A/B;

printf("A divisao e = %i\n",op);
	}
else
if (op == 4){
	op=A*B;

printf("A multiplicacao e = %i\n",op);
}
 

return 1;
}
