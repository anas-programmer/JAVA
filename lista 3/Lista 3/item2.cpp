#include <stdio.h>
int main(){
int mes, ano;
printf("digite o numero correspondente ao mes do ano (de 1 a 12):\n");

scanf("%d", &mes);
printf("informe o ano:\n");
scanf("%d", &ano);

float ano1(ano/4.0);
int ano2(ano/4);
float ano3(ano1-ano2);

if (ano3==0){
switch (mes){
case 1:
printf("mes=janeiro\nnumero de dias=31\n");
break;
case 2:
printf("mes=fevereiro\nnumero de dias=29\n");
break;
	
case 3:
printf("mes=marco\nnumero de dias=31\n");
break;
	
case 4:
printf("mes=abril\nnumero de dias=30\n");
break;
	
case 5:
printf("mes=maio\nnumero de dias=31\n");
break;
	
case 6:
printf("mes=junho\nnumero de dias=30\n");
break;
	
case 7:
printf("mes=julho\nnumero de dias=31\n");
break;
	
case 8:
printf("mes=agosto\nnumero de dias=31\n");
break;
	
case 9:
printf("mes=setembro\nnumero de dias=30\n");
break;
	
case 10:
printf("mes=outubro\nnumero de dias=31\n");
break;
	
case 11:
printf("mes=novembro\nnumero de dias=30\n");
break;
	
case 12:
printf("mes=dezembro\nnumero de dias=31\n");
break;

default:
	printf("ERRO!");}}	
	
else{
switch (mes){
case 1:
printf("mes=janeiro\nnumero de dias=31\n");
break;
case 2:
printf("mes=Fevereiro\nnumero de dias=28\n");
break;
	
case 3:
printf("mes=marco\nnumero de dias=31\n");
break;
	
case 4:
printf("mes=abril\nnumero de dias=30\n");
break;
	
case 5:
printf("mes=maio\nnumero de dias=31\n");
break;
	
case 6:
printf("mes=junho\nnumero de dias=30\n");
break;
	
case 7:
printf("mes=julho\nnumero de dias=31\n");
break;
	
case 8:
printf("mes=agosto\nnumero de dias=31\n");
break;
	
case 9:
printf("mes=setembro\nnumero de dias=30\n");
break;
	
case 10:
printf("mes=outubro\nnumero de dias=31\n");
break;
	
case 11:
printf("mes=novembro\nnumero de dias=30\n");
break;
	
case 12:
printf("mes=dezembro\nnumero de dias=31\n");
break;

default:
	printf("ERRO!");}}
return 0;
}