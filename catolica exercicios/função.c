/*#include <stdio.h>
#include <locale.h>

char nome[30];
float nota1,nota2,media;

void cadastrar(){
		
	printf("Digite seu Nome: ");
		fflush(stdin);
		fgets(nome,20,stdin);
		
	printf("Digite a 1� nota: ");
		scanf("%f", &nota1);
		
	printf("Digite a 2� nota: ");
		scanf("%f", &nota2);
}

void fx_media (){
	media = (nota1+nota2)/2;
}

void mostrar_resultado(){
	
	printf("1� nota: %.2f\n", nota1);
	printf("2� nota: %.2f\n", nota2);
	printf("M�dia: %.2f\n", media);
}



int main(){
	setlocale(LC_ALL, "");

	cadastrar();
	fx_media();
	system("cls");
	mostrar_resultado();
}*/




/*#include <stdio.h>
#include <locale.h>

char pai[30], mae[30], crianca[30];

void cadastro_crianca(){
	printf("Digite o nome da crian�a: ");
		fflush(stdin);
		fgets(crianca,30,stdin);
}

void cadastro_pais(){
	printf("Digite o nome da mae: ");
		fflush(stdin);
		fgets(mae,30,stdin);
	printf("Digite o nome do pai: ");
		fflush(stdin);
		fgets(pai,30,stdin);
	
}

void impressao(){
	
	printf("Nome da crian�a: %s\n", crianca);
	printf("Nome da m�e: %s\n", mae);
	printf("Nome da pai: %s\n", pai);
}


int main(){
	setlocale(LC_ALL, "");
	cadastro_crianca();
	cadastro_pais();
	system("cls");
	impressao();
	
	
}*/



#include <stdio.h>
#include <locale.h>
#include "Carlos.h"

int main(){
	setlocale(LC_ALL,"");
	cadastro();
	system("cls");
	impressao();
}


















