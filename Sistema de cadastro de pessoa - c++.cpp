#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	int codigo[10], idade[10], opt = 0, busca = 0, pessoa = 1;
	float salario[10];

	printf("Sistema de cadastro de pessoas\n\n");
	do{
	// menu 
	printf("\n1 - Cadastrar pessoas\n");
	printf("2 - Listar todas as pessoas\n");
	printf("3 - Buscar pessoa pelo codigo\n");
	printf("4 - Sair\n");
	// entrada
	printf("\nDigite a opcao desejada:");
	scanf("%i", &opt);
	fflush(stdin);
	// cadastrar as pessoas
	if(opt == 1)
	for(int i = 0; i < 10; i++){
		printf("\nPessoa %i:",pessoa);
		pessoa++;
		printf("\nDigite o codigo da pessoa:");
		scanf("%i", &codigo[i]);
		printf("Digite a idade da pessoa:");
		scanf("%i", &idade[i]);
		printf("Digite o salario da pessoa:");
		scanf("%f", &salario[i]);
	}
	// listar as pessoas
	else if(opt == 2){
		for(int i = 0; i < 10; i++){
			printf("Pessoa %i",pessoa);
			pessoa++;
			printf("Codigo: %i\n", codigo[i]);
			printf("Idade: %i\n", idade[i]);
			printf("Salario: %.2f", salario[i]);
			printf("\n\n");
		}
	}
	// buscar pelo codigo
	else if(opt == 3){
		printf("\nDigite o codigo da pessoa:");
		scanf("%i", &busca);
		for(int i = 0; i < 10; i++){
		if(busca==codigo[i]){
			printf("Pessoa encontrada\n");
			printf("Codigo: %i", codigo[i]);
			printf("\nIdade: %i", idade[i]);
			printf("\nSalario: %.2f\n", salario[i]);
		}
	}
	}
	// final
	else if(opt == 4){
		printf("\nPrograma encerrado");
	}
	// erros
	else 
		printf("\nNumero invalido\n\n");
	
}while(opt!=4);

	return 0;
}