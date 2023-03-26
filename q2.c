#include <stdio.h>
#include <stdlib.h>

int main() {

	int numero1,numero2;
	
	printf("Insira um numero: ");
	scanf("%i", &numero1);
	
	printf("Insira um numero: ");
	scanf("%i", &numero2);
	
	if(numero1 == numero2){
		printf("Os numeros sao iguais!");
	}else{
		if(numero1 > numero2){
			printf("o numero %i e o maior", numero1);
		}else{
			printf("o numero %i e o maior", numero2);
		}
	}
	
	return 0;

}
	
