#include <stdio.h>
#include<locale.h>

/* 

Este programa calcula a m�dia de duas notas de um concurso 
e informa se o candidato foi aprovado ou reprovado.

Ele solicita o turno, nome do concurso, hor�rio, matr�cula, 
nome do candidato e as notas.

Em seguida, exibe todas as informa��es e a m�dia calculada.*/


char letraTurno[2],turno[10], horario[6];
char nomeConcurso [30], nomeCandidato[20], matricula[10];
float nota1, nota2, media;

main(void){
	
	setlocale(LC_ALL, "");
	
	printf("********************************************************\n");
	printf("***Bem vindo a calculadora de notas do seu concurso!!***\n");
	printf("********************************************************\n\n");
	system("pause");
	system("cls");
	printf("---------------\nM - matutino\nV - vespertino\nN - noturno\n---------------\n");
	printf("Digite a letra referente ao seu turno: ");
		scanf(" %c", &letraTurno);
	
	//strcasecmp � para comparar strings verificando mesmo se for maiuscula ou minuscula
	//strcpy � para atribuir um texto(string) numa vari�vel
	 if (strcasecmp(&letraTurno, "M") == 0) {
        strcpy(turno, "Matutino");
    } else if (strcasecmp(&letraTurno, "V") == 0) {
        strcpy(turno, "Vespertino");
    } else {
        strcpy(turno, "Noturno");
    }
    printf("\nVoc� selecionou o turno: %s\n", turno);
	
	printf("\nDigite o nome do concurso: ");
		fflush(stdin);
		fgets(nomeConcurso,20,stdin);
	
	printf("\nDigite o horario do seu concurso: ");
		fflush(stdin);
		scanf("%s", horario);
	
	printf("\nDigite sua matricula: ");
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
	printf("Matr�cula: %s", matricula);
	printf("Nome do concurso: %s\n", nomeConcurso);
	printf("Turno: %s\n", turno);
	printf("Hor�rio: %s\n\n", horario);
	printf("Nota 1 = %.2f\n", nota1);
	printf("Nota 2 = %.2f\n", nota2);
	printf("M�dia = %.2f\n", media);
	
	if (media >=7){
		printf("Voc� est� aprovado!!!!");
	}else{
		printf("Voc� est� reprovado!!!!!");
	}
	
	
}

