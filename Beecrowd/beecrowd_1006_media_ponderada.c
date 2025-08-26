/*
Problema: Beecrowd 1006 - media 2

Leia 3 valores, no caso, variaveis A, B e C, que sao as tres notas de um aluno.
Calcule a media do aluno, sabendo que a nota A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5.
Considere que cada nota pode ir de 0 ate 10.0, sempre com uma casa decimal.

Entrada:
O arquivo de entrada contem 3 valores com uma casa decimal, de dupla precisao (double).

Saida:
Imprima a mensagem "MEDIA" e a media do aluno conforme exemplo abaixo, com 1 digito apos o ponto decimal
e com um espaco em branco antes e depois da igualdade. Assim como todos os problemas, nao esqueca de
imprimir o fim de linha apos o resultado, caso contrario, voce recebera "Presentation Error".
*/


#include<stdio.h>

double a, b, c, x;

main(void){
	
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	
a = a * 2;
	b = b * 3;
	c = c * 5;
	
x = (a + b + c)/ 10;
	
	printf("MEDIA = %.1lf\n", x);
}