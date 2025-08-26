/*
Problema - Calculadora de Notas de Concurso

Este programa calcula a média de duas notas de um concurso e informa 
se o candidato foi aprovado ou reprovado.

Fluxo do programa:
1. O usuário informa o turno (Matutino, Vespertino ou Noturno).
2. O programa solicita o nome do concurso, horário, matrícula, 
   nome do candidato e as notas.
3. Calcula a média das duas notas.
4. Exibe todas as informações e a situação (Aprovado ou Reprovado).
*/

#include <stdio.h>
#include <locale.h>
#include <string.h> // Necessária para strcpy e strcasecmp

char letraTurno[2], turno[10], horario[6];
char nomeConcurso[30], nomeCandidato[20], matricula[10];
float nota1, nota2, media;

main(void){
	
	setlocale(LC_ALL, "");
	
	printf("********************************************************\n");
	printf("*** Bem vindo à calculadora de notas do seu concurso! ***\n");
	printf("********************************************************\n\n");
	system("pause");
	system("cls");
	printf("---------------\nM - matutino\nV - vespertino\nN - noturno\n---------------\n");
	printf("Digite a letra referente ao seu turno: ");
		scanf(" %c", &letraTurno);
	
	// strcasecmp = compara strings sem diferenciar maiúscula de minúscula
	// strcpy = atribui um texto (string) a uma variável
	if (strcasecmp(&letraTurno, "M") == 0) {
        strcpy(turno, "Matutino");
    } else if (strcasecmp(&letraTurno, "V") == 0) {
        strcpy(turno, "Vespertino");
    } else {
        strcpy(turno, "Noturno");
    }
    printf("\nVocê selecionou o turno: %s\n", turno);
	
	printf("\nDigite o nome do concurso: ");
		fflush(stdin);
		fgets(nomeConcurso,20,stdin);
	
	printf("\nDigite o horário do seu concurso: ");
		fflush(stdin);
		scanf("%s", horario);
	
	printf("\nDigite sua matrícula: ");
		fflush(stdin);
		fgets(matricula,10,stdin);
	
	printf("\nDigite seu nome: ");
		fflush(stdin);
		fgets(nomeCandidato,20,stdin);
	system("cls");
	
	printf("\nDigite a primeira nota: ");
		scanf("%f", &nota1);
	
	printf("\nDigite sua segunda nota: ");
		scanf("%f", &nota2);
		
	media = (nota1 + nota2) / 2;
	
	system("cls");
	
	printf("Nome do aluno: %s", nomeCandidato);
	printf("Matrícula: %s", matricula);
	printf("Nome do concurso: %s\n", nomeConcurso);
	printf("Turno: %s\n", turno);
	printf("Horário: %s\n\n", horario);
	printf("Nota 1 = %.2f\n", nota1);
	printf("Nota 2 = %.2f\n", nota2);
	printf("Média = %.2f\n", media);
	
	if (media >= 7){
		printf("Você está aprovado!!!!");
	}else{
		printf("Você está reprovado!!!!!");
	}
}