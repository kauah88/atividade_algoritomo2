#include <stdio.h>
#include <stdlib.h>

int main() {

	int numero;
	
	printf("Insira um numero: ");
	scanf("%i", &numero);
	
	if(numero % 2 == 0){
		printf("numero %i e par", numero);
	}else{
		printf("Numero %i e impar", numero);
	}
	

}
