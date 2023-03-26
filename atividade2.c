#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int numero1,numero2;
	
	printf("Insira um numero: ");
	scanf("%i", &numero1);
	
	printf("Insira um numero: ");
	scanf("%i", &numero2);
	
	if (numero1 > numero2){
		printf("%i", numero1);
	}else{
		printf("%i", numero2);
	};
	
	
	return 0;
}
