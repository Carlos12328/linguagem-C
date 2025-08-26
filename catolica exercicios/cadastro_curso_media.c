/*
Problema: Cadastro de Curso e Aluno

Este programa coleta informações sobre um curso e um candidato, incluindo:
- Nome do curso
- Turno (Manhã, Tarde ou Noite)
- Matrícula do aluno
- Nome do candidato
- Duas notas

Após a entrada dos dados, o programa calcula a média das notas e exibe um resumo com todas as informações inseridas e a média calculada.
*/

#include <stdio.h>
#include <locale.h>

char t[1];
char nomedocurso[20], nomecand[20];
float matricula, n1, n2, media;

main(void){
	setlocale(LC_ALL,"  ");
	printf("Nome do curso:");
	scanf("%s", &nomedocurso);
	printf("Turno (M)Manha(T) Tarde, (N) Noite:");
    fflush(stdin);
	gets(t);
	printf("Matricula:");
	scanf("%f", &matricula);
	
	printf("Nome do candidato:");
	fflush(stdin);
	gets(nomecand);
		
	
	printf("Primeira nota:");
	scanf("%f", &n1);
	printf("segunda nota:");
	scanf("%f",&n2);
	
    
	printf("Primeira Nota = %.2f \n", n1 );
	printf("Segunda Nota = %.2f \n", n2);
	media =(n1 + n2)/2; 
	

		system("cls");
		
		// limpa tela
		
		printf("Nome do curso: %s \n", nomedocurso);
		printf("Turno: %s \n",t);
        printf("Matricula: %f \n", matricula);
		printf("Nome do Candidato: %s \n", nomecand);
		printf("Media = %.2f", media);

}