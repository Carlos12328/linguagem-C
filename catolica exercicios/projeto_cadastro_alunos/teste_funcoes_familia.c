/*
Problema: Teste de Funções de Cadastro Familiar

Este programa serve como um teste para as funções de cadastro e impressão
definidas no arquivo de cabeçalho "Carlos.h".

Funcionalidades:
- Inclui o cabeçalho "Carlos.h" que contém a implementação das funções.
- Chama a função cadastro() para registrar dados (presumivelmente de uma família).
- Limpa a tela.
- Chama a função impressao() para exibir os dados cadastrados.
*/

#include <stdio.h>
#include <locale.h>
#include "cadastro_alunos_biblioteca.h"

int main(){
	setlocale(LC_ALL,"");
	cadastro();
	system("cls");
	impressao();
}