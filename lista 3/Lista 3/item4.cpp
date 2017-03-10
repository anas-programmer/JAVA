#include <stdio.h>
int main(){
float km;
char tipoCarro;

printf("OBS - Tipos de carros: A, B OU C\n\n");
	printf("\ndigite a quatidade de quilometros:");
	scanf("%f", &km);
if (km<0)
	printf("ERRO!");
else{
	printf("\ninforme o tipo do carro:");
	scanf(" %c", &tipoCarro);

if (tipoCarro=='A')
printf("consumo = %.2f litro(s)", km/12);
else
if (tipoCarro=='B')
printf("consumo = %.2f litro(s)", km/10);
else 
if (tipoCarro=='C')
printf("consumo = %.2f litro(s)", km/8);

else 
printf("ERRO!");}

return 0;}
