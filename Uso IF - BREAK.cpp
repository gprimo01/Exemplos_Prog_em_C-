#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	
	int x=1;
	
	while(x<=100){
		printf("\n %.4i - Lava bem as mãos. Use álcool gel.",x);
		x--; // incremento	
		
		if (x==50){
			break;
		}
	}

	printf("\n\n\n FIM DO PROGRAMA.");
	
}

