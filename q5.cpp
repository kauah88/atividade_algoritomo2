#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int numero;
	float raiz_q, n_ao_quadrado; 
	
	printf("Insira um numero: ");
	scanf("%i", &numero);
	
	if (numero>=0){
		
		n_ao_quadrado=numero * numero;
		raiz_q = sqrt(numero);
		
		printf("numero %i ao quadrado: %.2f",numero ,n_ao_quadrado);
		printf("\nRaiz quadrada de %i: %.2f", numero, raiz_q);
		
		
	}else{
		printf("Numero menor que zero.");
	}
	
	
}

