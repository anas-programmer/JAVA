#include <stdio.h>
int main(){
int digitosFinais;
printf("digite os 4 digitos finais da placa:\n");
scanf("%d", &digitosFinais);

if ((digitosFinais<1000) || (digitosFinais>9999))
	printf("ERRO!");
else {		
int n1(digitosFinais/1000);
int n2((digitosFinais-n1*1000)/100);
int n3((digitosFinais-(n1*1000+n2*100))/10);
int n4(digitosFinais-(n1*1000+n2*100+n3*10));

switch (n4){
case 1:	
printf("O IPVA deve ser pago ate o mes de janeiro");
break;
case 2:
printf("O IPVA deve ser pago ate o mes de fevereiro");
break;
case 3:
printf("O IPVA deve ser pago ate o mes de marco");
break;
case 4:
printf("O IPVA deve ser pago ate o mes de abril");
break;
case 5:
printf("O IPVA deve ser pago ate o mes de maio");
break;
case 6:
printf("O IPVA deve ser pago ate o mes de junho");
break;
case 7:
printf("O IPVA deve ser pago ate o mes de julho");
break;
case 8:
printf("O IPVA deve ser pago ate o mes de agosto");
break;
case 9:
printf("O IPVA deve ser pago ate o mes de setembro");
break;
case 0:
printf("O IPVA deve ser pago ate o mes de outubro");
break;
default:
printf("ERRO!");}}

return 0;}