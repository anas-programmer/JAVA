#include <stdio.h>
int main()
{
	int n;
	printf("informe um numero de 4 digitos:\n");
	scanf("%d", &n);

	if((n>=10000) || (n<1000))
		printf("ERRO, NUMERO INVALIDO\n");	

	else
	{		
	int number1(n/1000);
	int number2((n-number1*1000)/100);
	int number3((n-(number1*1000+number2*100))/10);
	int number4(n-(number1*1000+number2*100+number3*10));
	int number5(number4*1000+number3*100+number2*10+number1);
	printf("Resultado = %d\n", number5);
	}

	return 0;
}
