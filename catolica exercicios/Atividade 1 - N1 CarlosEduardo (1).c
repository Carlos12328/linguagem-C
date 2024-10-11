//Feito por Carlos Eduardo Rodrigues de Carvalho 12/09/24 23:54

#include <stdio.h>
#include <locale.h>
/*Biblioteca usada para manipular strings(texto)*/
#include <string.h>


int qnt, i;

main (void){ 
	
    setlocale(LC_ALL, "");
    
    printf("***********************************************\n");
    printf("* Bem vindo ao programa de cadastro de alunos *\n");
    printf("***********************************************\n\n");
    
    system ("pause");
    system ("cls");
    
    printf("Digite a quantidade de alunos que ir� ser cadastrados: ");
    	scanf("%i", &qnt);
    	
    system ("cls");
    
    
    float n1[qnt], n2[qnt]; 
	float media[qnt];
	/*o primeiro "[]" � para definir a quantidade de vari�veis existentes
	o segundo "[]" � para definir a quantidade de caracteres de cada vari�vel*/
	char nome[qnt][30], situacao[qnt][15];
	
    
    /*for (define o valor inicial da vari�vel; a regra de repeti��o;
	define a regra de implementa��o)*/
    for (i = 1; i <= qnt; i++){
    	
		printf("Escreva o nome do %i� aluno: ", i);
			fflush(stdin);
			/*nome[i]: o [i] define em qual posi��o a memoria vai ficar*/
			fgets(nome[i],30,stdin);
		
		printf("Nota da N1: ");
			scanf("%f", &n1[i]);
			
		printf("Nota da N2: ");
			scanf("%f", &n2[i]);
			
		media[i] = (n1[i] + n2[i])/ 2;
		
		
		/*Func�o strcpy � para copiar string para dentro de uma vari�vel*/
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
		printf("Aluno n� %i: %s\n",i, nome[i]);
    	printf("N1 desse estudante: %.2f\n", n1[i]);			
		printf("N2 desse estudante: %.2f\n", n2[i]);
		printf("M�dia = %.2f\n\n", media[i]);
		printf("Situa��o: %s\n\n", situacao[i]);
		
	}
	 
}
