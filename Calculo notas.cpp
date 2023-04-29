#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	float nota1, nota2, media;
	
	printf ("\n Nota 1:"); scanf("%f",&nota1);
	printf ("\n Nota 2:"); scanf("%f",&nota2);
	media = (nota1 + nota2)/2;
	
	printf ("\n Média Final =%.1f", media);
	printf ("\n Conceito:");
	/*
	switch (media){
		case 0: case 1: case 2: printf ("E");break;
	    case 3: case 4: printf ("D");break;
	    case 5: case 6: printf ("C");break;
	    case 7: case 8: printf ("B");break;
	    case 9: case 10: printf ("A");break;
	}
	*/
	// Encadeamento de IF-ELSE-IF
	if (media>=0 && media<2){
		printf ("E");
	}else if (media>=2 && media <4){
		printf ("D");
	}else if (media>=4 && media<6){
	    printf ("C");
	}else if (media>=6 && media<8){
	    printf ("B");
    }else if (media>=8 && media <=10){
    	printf ("A");
	}else {
		printf ("\n Estudado pela NASA!!");
	}
}
