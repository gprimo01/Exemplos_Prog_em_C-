#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

//GIOVANNI PRIMO DE LIMA RA:11190717

float calculo_sal_bruto(int ht, float vht){
	return (ht*vht);	
}

main(){
	setlocale(LC_ALL,"Portuguese");
	
	//Declara��o de vari�veis
	char colaborador[120], conjuge, plano_saude, plano_odonto, filhos, validacao;
	int matricula=0, horas_trabalhadas=0, qtde_filhos=0;	
	float valor_hora_trabalhada=0, sal_bruto=0, IR=0, INSS=0, desconto_odonto= 41.90, salario_familia, salario_liquido=0;
	
	//Tela de entrada de dados
	do{
	
	puts("\n\n ***** EMPRESA  S/A ***** \n\n");
	
	puts(" 1. Dados do colaborador: ");
	printf("\n\t Colaborador : "); gets(colaborador);
	
	do{
		printf("\n\t Matr�cula   : "); scanf("%i",&matricula);
	}while(matricula<=0);

	puts("\n\n 2. Dados sobre o pagamento: ");
	printf("\n\t Horas trabalhadas m�s       : "); scanf("%i",&horas_trabalhadas);
	printf("\n\t Valor da hora Trabalhada R$ : "); scanf("%f",&valor_hora_trabalhada);

	puts("\n\n 3. Dados sobre dependentes");
	do{
		printf("\n\t Quantidade de Filhos :"); 
		scanf("%i",&qtde_filhos);
	}while(qtde_filhos<=0);
	
	do{
		printf("\n\t C�njuge [S/N] :"); 
		scanf(" %c",&conjuge);
		conjuge = toupper(conjuge);
	}while(conjuge !='S' && conjuge!='N');
	
	
		printf("\n\t Acesso ao Plano de Sa�de?");
		scanf(" %c",&plano_saude);
		desconto_odonto = 41.90;
		if(plano_saude !='S' && plano_saude!= 'N'){
		}if(conjuge=='S'){
		plano_saude=plano_saude+32.90;
		}
		if(filhos>0 && filhos<=3){
		plano_saude=plano_saude+(16.90*filhos);
		}
		if(filhos>5){
		plano_saude=plano_saude+50.70;
	}
	
	
	printf("\n\n\t "); 
	system("pause");
	system("cls");
	
		//Calculos
	sal_bruto = horas_trabalhadas * valor_hora_trabalhada;
	
	// calculo do imposto de renda
	if (sal_bruto<1903.98);{
	IR = 0;
}	if (sal_bruto>=1903.99 && sal_bruto<2826.65){	
    IR = 142.80;
}else if (sal_bruto>=2826.66 && sal_bruto<3751.05){
    IR = 354.80;
}else if (sal_bruto>=3751.06 && sal_bruto<4664.68){
    IR = 636.13;
}else{
	IR = sal_bruto * 869.36;	
}

	// Calculo do INSS
	
	if (sal_bruto<1045.00){
	INSS = sal_bruto * 0.075;
}else if (sal_bruto>=1045.00 && sal_bruto<2098.60){	
    INSS = sal_bruto * 0.09;
}else if (sal_bruto>=2098.60 && sal_bruto<3134.40){
    INSS = sal_bruto * 0.12;
}else{
	INSS = sal_bruto * 0.14;
}
	//SAL�RIO FAM�LIA
	if(sal_bruto <= 608.80)
	{
		salario_familia = qtde_filhos * 31.22;
	}
	else if(sal_bruto > 608.81 && sal_bruto <= 915.05)
	{
		salario_familia = qtde_filhos * 22;
	}
	
	salario_liquido = sal_bruto - (INSS + IR + plano_saude + desconto_odonto) + (salario_familia);
	
	
	puts("\n\n ********* RELAT�RIO FINAL ********* ");

printf("---------------------------------------------------------------------------");	
	
	printf("\n 1. Dados do colaborador............");
	printf("\n Colaborador                      : ",colaborador);
	printf("\n Matr�cula                        : ",matricula );

	printf("\n 2. Vencimentos.....................");
	printf("\n Sal�rio Bruto                    : ",sal_bruto);

	
	printf("\n 3. Descontos......................");
	printf("\n Desconto INSS               :%.2f ", INSS);
	printf("\n Desconto IRRF               :%.2f ", IR);
	printf("\n Desconto Plano de Sa�de     :%.2f ", plano_saude);
	printf("\n Desconto Plano Odontol�gico :%.2f ", plano_odonto);
	
	printf("\n\n Vantagens.......................");
	
	printf("\n Sal�rio fam�lia: %.2f",salario_familia);

	printf("\n 4. Sal�rio........................");
	printf("\n Descontos.........................");
	printf("\n Quantidade de filhos: %i", qtde_filhos);
	
	printf("\n\n Sal�rio.........................");
	printf("\n Sal�rio Bruto		 	   :%.2f", sal_bruto);	
	printf("\n Sal�rio l�quido             :%.2f", salario_liquido);
	
	}
}
