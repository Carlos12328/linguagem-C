/*
Problema: Teste Simples de Impressão

Este é um programa de exemplo mínimo que demonstra a configuração do
ambiente para usar a acentuação e a impressão de uma simples
mensagem na tela.
*/

#include <stdio.h>
#include <locale.h>

main(void){

    setlocale(LC_ALL, "");

    printf("oi");
}