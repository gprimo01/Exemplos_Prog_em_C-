#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	puts("\n *******Selecione o melhor time*********");
	puts("\n[1] - Santos");
	puts("\n[2] - Palmeiras");
	puts("\n [3]- Flamengo");
	puts("\n [4]- Ponte Preta");
	puts("\n [5]- S�o Paulo");
	int opc;
	printf ("\n Escolha a op��o:");
	scanf ("%i", &opc);
	
	switch (opc){
		case 1: printf ("\n Santos");break;
		case 2: printf ("\n Palmeiras"); break;
		case 3: printf ("\n Flamengo");break;
		case 4: printf ("\n Ponte Preta");break;
		case 5: printf ("\n S�o Paulo");break;
	}
}

