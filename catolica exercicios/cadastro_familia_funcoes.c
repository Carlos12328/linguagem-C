/*
Problema: Cadastro Familiar com Funções

Este programa utiliza funções para cadastrar os nomes da criança, da mãe e do pai,
e depois exibe as informações na tela.

Funcionalidades:
- Função cadastro_crianca(): Solicita e armazena o nome da criança.
- Função cadastro_pais(): Solicita e armazena o nome da mãe e do pai.
- Função impressao(): Exibe os nomes da criança, da mãe e do pai.
- A função main() orquestra a chamada das outras funções.
*/

#include <stdio.h>
#include <locale.h>

char pai[30], mae[30], crianca[30];

void cadastro_crianca(){
	printf("Digite o nome da criança: ");
		fflush(stdin);
		fgets(crianca,30,stdin);
}

void cadastro_pais(){
	printf("Digite o nome da mãe: ");
		fflush(stdin);
		fgets(mae,30,stdin);
	printf("Digite o nome do pai: ");
		fflush(stdin);
		fgets(pai,30,stdin);
	
}

void impressao(){
	
	printf("Nome da criança: %s\n", crianca);
	printf("Nome da mãe: %s\n", mae);
	printf("Nome do pai: %s\n", pai);
}


int main(){
	setlocale(LC_ALL, "");
	cadastro_crianca();
	cadastro_pais();
	system("cls");
	impressao();
	
	
}
