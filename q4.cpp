#include <stdio.h>
#include <stdlib.h>

int main(){

	float salario, emprestimo,negado;
	
	printf("Insira seu salario: ");
	scanf("%f", &salario);
	
	printf("Qual o valor do emprestimo deesejado? ");
	scanf("%f", &emprestimo);
	
	negado=salario*0.2;
	
	if(emprestimo > negado){
		printf("\nEmprestimo nao concedido, pois e mais que 20%% do seu salario atual.");
		
	}else{
		printf("\nEmprestimo concedido.");	
	}
}
