#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	
	puts("\n *** Letra  ***");
	
	char letra;
	int count=0;
	
	printf("\n Digite uma letra : ");
	scanf(" %c",&letra);
	
	while(letra!='X' && letra!='x'){
		system ("cls");
		printf("\n Letra inv�lida! Voc� digitou a letra: %c, tente novamente. \n\n Digite uma nova letra : ",letra);
		scanf(" %c",&letra);
		count ++;
	}
	
	printf("\n Tentativas:", count);#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	
	puts("\n *** Letra A ***");
	
	char letra;
	int count=0;
	
	printf("\n Digite uma letra : ");
	scanf(" %c",&letra);
	
	while(letra!='X' && letra!='x'){
		//system("cls");
		puts("\n *** Letra  ***");
		printf("\n Letra inv�lida! Voc� digitou a letra: %c, tente novamente. \n\n Digite uma nova letra : ",letra);
		scanf(" %c",&letra);
		count++;
	}

	printf("\n Tentativas : %i",count);
	printf("\n Voc� acertou a letra! Parab�ns!");
	printf("\n\n\n FIM DO PROGRAMA.");
}
