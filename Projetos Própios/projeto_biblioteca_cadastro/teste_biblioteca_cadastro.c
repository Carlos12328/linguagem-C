/*
Problema: Teste de Biblioteca de Cadastro

Este programa serve como um exemplo de como utilizar a biblioteca "biblioteca.h".

Funcionalidades:
- Inclui a biblioteca customizada "biblioteca.h".
- Chama a função cadastro() para registrar informações.
- Limpa a tela.
- Chama a função impressao() para exibir as informações cadastradas.
*/

#include <stdio.h>
#include <locale.h>
#include "biblioteca_cadastro_alunos.h"

int main(){
	setlocale(LC_ALL,"");
	cadastro();
	system("cls");
	impressao();
}