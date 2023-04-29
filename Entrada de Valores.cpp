#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	
	float valor=0;
	char sexo;
	
	do{
		system ("cls");
	   printf ("\n Inserir o Valor desejado:");
	   scanf ("%f", valor);
	   total+valor;	
       
		printf("\n Digite <S> para finalizar o programa: ");
		fflush(stdin);//Limpa o buffer do teclado
	}while(getchar() != 'S');
	
	printf ("\n Total Acumulado :2.f", total);
	printf("\N\N FIM DO PROGRAMA...");
	
}
