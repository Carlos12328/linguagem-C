/*
Problema - Sistema de Login e Ordenação de Valores

Este programa implementa um sistema de login simples e, após o login,
solicita três valores para ordená-los.

Funcionalidades:
1. Pede um login e senha.
2. Valida se o login é "adm" e a senha é "123".
3. Se o login estiver incorreto, solicita novamente.
4. Após o login bem-sucedido, lê três valores reais.
5. Ordena e exibe os valores em ordem decrescente (maior, intermediário, menor).
6. Informa se há valores iguais.

Observação: O código está incompleto e implementa apenas a parte de login.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

char login[5];
int senha;

int main (void){
	
	setlocale(LC_ALL, "");
	
	printf("Digite seu login: ");
		fflush(stdin);
		fgets(login, 4, stdin);
	
	printf("Digite sua senha: ");
		scanf("%i", &senha);
		
	//Se as duas strings forem iguais, strcmp retorna 0
	while (strcmp(login, "adm") != 0){
	
		system("cls");	
		
		printf("Tente novamente, digite seu login: ");
			fflush(stdin);
			fgets(login, 4, stdin);		
		
	}
	printf("%s", login);
}