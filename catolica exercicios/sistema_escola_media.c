/*
Problema: Sistema Escolar para Cálculo de Média

Este programa (com algumas imprecisões) foi projetado para:
1. Solicitar a quantidade de alunos a serem cadastrados.
2. Ler o nome e as duas notas (N1 e N2) de um aluno.
3. Calcular a média das notas.
4. Determinar se o aluno foi aprovado (média >= 7) ou reprovado.
5. Imprimir um resumo com o nome, as notas e a média do aluno.

Observação: O código possui erros lógicos, como a forma de ler a quantidade
de alunos e o cálculo da média, que não foram alterados.
*/

#include<stdio.h>
#include<locale.h>

float n1,n2,media,alunos[5];

char nome[20];

main(void){
	
	setlocale(LC_ALL,"");

//cadastro
	
	printf("---------- SISTEMA ESCOLA ----------\n");	
	printf("DIGITE A QUANTIDADE DE ALUNOS PARA CADASTRAR: \n");
		scanf("%f",&alunos);
	
	printf("NOME DO ALUNO: \n");
		fflush(stdin);
		fgets(nome,10,stdin);
		
	printf("VALOR DA N1: \n");
		scanf("%f",&n1);
		
	printf("VALOR DA N2:  \n");
		scanf("%f",&n2);
	
//media
	media = n1+n2/2;	
 	if(media>=7){
 		printf("****** APROVADO *******\n");
 	 }
	else{
		printf("****** REPROVADO *******\n");
	}
	
	printf("---------------- IMPRESSÃO -----------------\n");		
//impressão
	printf("NOME ALUNO: %s",nome);	
	printf("NOTA 1: %f\n",n1);
	printf("NOTA 2: %f\n",n2);
	printf("MÉDIA: %f\n",media);
	
	
	
	
	
}
