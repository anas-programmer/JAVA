#include <stdio.h>
int main()
{
	int idade;
	double peso;

	printf("informe a idade:\n");
	scanf("%d", &idade);

	if (idade < 0)
		printf("ERRO!");

	else
		printf("informe o peso:\n");
	scanf("%lf", &peso);

	if (peso < 0)
		printf("ERRO!");

	else if (idade >= 12 && peso >= 60)
		printf("dosagem = %.0f gotas", (1000.0 / 500) * 20);

	else if (idade >= 12 && peso < 60)
		printf("dosagem = %.0f gotas", (875.0 / 500) * 20);

	else if  (idade < 12 && peso >= 5 && peso <= 9)
		printf("dosagem = %.0f gotas", (125.0 / 500) * 20);

	else if (idade < 12 && peso > 9 && peso <= 16)
		printf("dosagem = %.0f gotas", (250.0 / 500) * 20);

	else if (idade < 12 && peso > 16 && peso <= 24)
		printf("dosagem = %.0f gotas", (375.0 / 500) * 20);

	else if (idade < 12 && peso > 24 && peso <= 30)
		printf("dosagem = %.0f gotas", (500.0 / 500) * 20);

	else if (idade < 12 && peso > 30)
		printf("dosagem = %.0f gotas", (750.0 / 500) * 20);


	return 0;
}
