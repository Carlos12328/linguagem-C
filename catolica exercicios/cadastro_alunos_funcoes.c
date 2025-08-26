/*
Problema - Cadastro de Alunos com Funções

Crie um programa que permita cadastrar 3 alunos, armazenando:
- Nome
- Nota da N1
- Nota da N2
- Média das notas

O programa deve utilizar funções:
- Função cadastro(): lê os dados de cada aluno
- Função impressao(): mostra os dados de cada aluno

Entrada:
Nome, N1 e N2 de cada aluno.

Saída:
Nome, N1, N2 e média de cada aluno.
*/

#include <stdio.h>
#include <locale.h>

char nome[3][30];
float n1[4],n2[4],media[4];
int i;

void cadastro(){

		printf("Digite o nome do %iº aluno: ", i);
		fflush(stdin);
		fgets(nome[i],20,stdin);
		
		printf("Digite a N1 do %iº aluno: ", i);
			scanf("%f", &n1[i]);
		printf("Digite a N2 do %iº aluno: ", i);
			scanf("%f", &n2[i]);
			
		media[i] = (n1[i]+n2[i])/2;	
	
}

void impressao(){
		printf("\n\nNome do %iº aluno: %s\n", i, nome[i]);
		printf("N1 do %iº aluno: %.2f\n", i, n1[i]);
		printf("N2 do %iº aluno: %.2f\n", i, n2[i]);
		printf("Média do %iº aluno: %.2f\n",i, media[i]);
		sleep(1);
		printf("-------------------------------------------");
			
	}


int main(){
	for (i=1; i <= 3; i++){
		setlocale(LC_ALL,"");
		cadastro();
		system("cls");
	}
	for (i=1; i <= 3; i++){
		impressao();
	}
}
