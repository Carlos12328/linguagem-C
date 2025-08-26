/*
Biblioteca de Cadastro de Alunos

Este arquivo de cabeçalho define as estruturas de dados e as funções
para cadastrar e imprimir informações de alunos.

Variáveis Globais:
- nome: Array para armazenar os nomes de até 3 alunos.
- n1, n2, media: Arrays para armazenar as notas e a média de 4 alunos (índices 1 a 3 são usados).
- i: Variável de controle para loops.

Funções:
- cadastro(): Coleta o nome e as duas notas de 3 alunos, calcula a média e armazena nos arrays.
- impressao(): Exibe os dados (nome, notas, média) dos 3 alunos cadastrados.
*/

char nome[3][30];
float n1[4],n2[4],media[4];
int i;

void cadastro(){
	for (i=1; i <= 3; i++){
		printf("Digite o nome do %iº aluno: ", i);
		fflush(stdin);
		fgets(nome[i],20,stdin);
		
		printf("Digite a N1 do %iº aluno: ", i);
			scanf("%f", &n1[i]);
		printf("Digite a N2 do %iº aluno: ", i);
			scanf("%f", &n2[i]);
			
		media[i] = (n1[i]+n2[i])/2;
		
		system("cls");
			
	}	
}

void impressao(){
	for (i=1; i <= 3; i++){
		printf("\nNome do %iº aluno: %s\n", i, nome[i]);
		printf("N1 do %iº aluno: %.2f\n", i, n1[i]);
		printf("N2 do %iº aluno: %.2f\n", i, n2[i]);
		printf("Média do %iº aluno: %.2f", media[i]);
		sleep(1);	
	}
}
