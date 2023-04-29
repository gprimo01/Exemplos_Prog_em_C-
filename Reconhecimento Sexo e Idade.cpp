#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	char sexo;
	int idade;
	char nome [50];
	
	printf ("\n Digite sua idade:"); scanf ("%i", &idade);
	printf ("\n Sexo <M/F>      :"); scanf (" %c", &sexo);
	
	print (" Seu sexo é %s", sexo== "M"? "Masculino":"Feminino");
	if (sexo== 'M'){
		printf ("Masculino");
	}
	els{
		printf ("Feminino");
  }
}
