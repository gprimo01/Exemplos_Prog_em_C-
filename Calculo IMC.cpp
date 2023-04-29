#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<stdlib.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	char nome [150];
	float peso, altura, imc;
	
	//Entrada de Dados
	printf ("\n ****** PROGRAMA DO IMC ******");
	printf ("\n Digite o nome do paciente:"); gets (nome);
	printf ("\n Digite o peso do paciente:"); scanf ("%f", &peso);
	printf ("\n Digite a altura do paciente:"); scanf ("%f", &altura);
	
	//calculo IMC
	imc= peso/(pow(altura,2));
	
	//saida de dados
	puts ("\n");
	system ("pause");
	system ("cls");
	
	
	puts ("****** RELAT�RIO DO PACIENTE******");
	printf ("\n Paciente           :%s", nome);
	printf ("\n Peso do Paciente   : %.1f", peso);
	printf ("\n Altura do Paciente : %.2f", altura);
	printf ("\n IMC                : %.1f",imc);
	printf ("\n Categoria:");
	
	//sofrimento
	if (imc<16){
		printf ("\n Baixo Peso Grau III");
	}else if (imc>=16 && imc<=16.99){
		printf ("\n Baixo Peso Grau II");
	}else if (imc>= 17 && imc<= 18.49){
		printf ("\n Baixo Peso Grau I");
	}else if (imc>=18.50  && imc<24.99){
		printf ("\n Peso Ideal");
	}else if (imc>=25 && imc<29.99){
		printf ("\n Sobrepeso");
	}else if (imc>=30 && imc< 34.99){
		printf ("\n Obesidade Grau I");
	}else if (imc>=35 && imc< 39.99){
		printf ("\n Obesidade Grau II");
	} else if  (imc>=40){
		printf ("\n Obesidade GRAU III");
	}
	
}
