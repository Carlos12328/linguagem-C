/*
Problema - Cadastro de Alunos com Média

Crie um programa que permita cadastrar alunos, armazenando:
- Nome
- Nota da N1
- Nota da N2
- Média das notas
- Situação (Aprovado ou Reprovado)

O programa deve perguntar quantos alunos serão cadastrados, 
ler as informações de cada um e, ao final, exibir todos os dados.

Regra de aprovação:
- Média maior ou igual a 7 → Aprovado
- Média menor que 7 → Reprovado
*/

//Feito por Carlos Eduardo Rodrigues de Carvalho 12/09/24 23:54

#include <stdio.h>
#include <locale.h>
/*Biblioteca usada para manipular strings (texto)*/
#include <string.h>

int qnt, i;

main (void){ 
    	
    setlocale(LC_ALL, "");
    
    printf("***********************************************\n");
    printf("* Bem vindo ao programa de cadastro de alunos *\n");
    printf("***********************************************\n\n");
    
    system ("pause");
    system ("cls");
    
    printf("Digite a quantidade de alunos que ira ser cadastrados: ");
    	scanf("%i", &qnt);
    	
    system ("cls");
    
    float n1[qnt], n2[qnt]; 
	float media[qnt];
	/*o primeiro "[]" é para definir a quantidade de variáveis existentes
	o segundo "[]" é para definir a quantidade de caracteres de cada variável*/
	char nome[qnt][30], situacao[qnt][15];
	
    /*for (define o valor inicial da variável; a regra de repetição;
	define a regra de implementação)*/
    for (i = 1; i <= qnt; i++){
    	
		printf("Escreva o nome do %iº aluno: ", i);
			fflush(stdin);
			/*nome[i]: o [i] define em qual posição a memória vai ficar*/
			fgets(nome[i],30,stdin);
		
		printf("Nota da N1: ");
			scanf("%f", &n1[i]);
			
		printf("Nota da N2: ");
			scanf("%f", &n2[i]);
			
		media[i] = (n1[i] + n2[i])/ 2;
		
		/*Função strcpy é para copiar string para dentro de uma variável*/
		if (media[i] >= 7){
			strcpy(situacao[i], "Aprovado");
		}else{
			strcpy(situacao[i], "Reprovado");
		}
				
		system("cls");
	}
	
	system ("cls");
	
	for (i = 1; i <= qnt; i++){
    	printf("-----------------------------\n");
		printf("Aluno nº %i: %s\n",i, nome[i]);
    	printf("N1 desse estudante: %.2f\n", n1[i]);			
		printf("N2 desse estudante: %.2f\n", n2[i]);
		printf("Média = %.2f\n\n", media[i]);
		printf("Situação: %s\n\n", situacao[i]);
	}
}
