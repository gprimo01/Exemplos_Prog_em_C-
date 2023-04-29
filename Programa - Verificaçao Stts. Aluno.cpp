#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	
	const int MAX = 6;
	int faltas_do_aluno[MAX], valor_maior=0, valor_menor, i, maior_falta, menor_falta;
	float media_do_aluno[MAX], acumulador_media=0, acumulador_faltas=0;
	
	do{
		system("cls");
		puts("\n\n ******  Programa � Verifica situa��o do aluno ***** ");
	//Entrada de Dados
		for(int i=0;i<MAX;i++){
			do{
				printf("\n Digite Notas - Aluno #%i : ",i); scanf("%f",&media_do_aluno[i]);
			}while(media_do_aluno[i]<0 || media_do_aluno[i]>10);		
			acumulador_media += media_do_aluno[i];
			do{
				printf("\n Digite Faltas - Aluno #%i : ",i); scanf("%i",&faltas_do_aluno[i]);
			}while(faltas_do_aluno[i]<0 || faltas_do_aluno[i]>40);		
			acumulador_faltas += faltas_do_aluno[i];
			system("\n\t pause");
		}
	//Media Final
		acumulador_media /= MAX;
		acumulador_faltas /= MAX;
		
		system("cls");
		puts("\n\n ******  Relat�rio Resumido do Sistema ******** ");
		puts("\n\n ***** Resumo das Notas ****** ");
		printf("\n\t M�dia %.2f",acumulador_media);
		
	//Maior Nota
		for(i=0;i<MAX;i++){
			if(media_do_aluno[i] > valor_maior ){
				valor_maior = media_do_aluno[i]; 			
			}
		}
		printf("\n\t Aluno [%i] - Maior Nota = %i",i,valor_maior);
		
	//Menor Nota
		for(i=0;i<MAX;i++){
			if(media_do_aluno[i] <= valor_menor ){
				valor_menor = media_do_aluno[i]; 			
			}
		}
		printf("\n\t Aluno [%i] - Menor Nota = %i",i,valor_menor);
		
		puts("\n\n ******  Relat�rio Resumido do Sistema ******** ");
		puts("\n\n ***** Resumo das Faltas ****** ");
		printf("\n\t M�dia %.2f",acumulador_faltas);
		
	//Maior Falta
		for(i=0;i<MAX;i++){
			if(faltas_do_aluno[i] > maior_falta ){
				maior_falta = faltas_do_aluno[i]; 			
			}
		}
		printf("\n\t Aluno [%i] - Maior Falta = %i",i,maior_falta);
		
	//Menor Falta
		for(i=0;i<MAX;i++){
			if(faltas_do_aluno[i] <= menor_falta ){
				menor_falta = faltas_do_aluno[i]; 			
			}
		}
		printf("\n\t Aluno [%i] - Menor Falta = %i",i,menor_falta);

	system("pause");
	
	}while(1);	//sair	
}
// Giovanni primo de lima , RA: 11190717
