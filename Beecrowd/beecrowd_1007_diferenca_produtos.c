/*
Problema 1007 Beecrowd

Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferenca do produto
de A e B pelo produto de C e D segundo a formula: DIFERENCA = (A * B - C * D).

Entrada
O arquivo de entrada contem 4 valores inteiros.

Saida
Imprima a mensagem DIFERENCA com todas as letras maiusculas, conforme exemplo abaixo, com um
espaco em branco antes e depois da igualdade.
*/



#include <stdio.h>
 
 int A,B,C,D, diferenca;
 
int main() {
 
    scanf("%i", &A);
    scanf("%i", &B);
    scanf("%i", &C);
    scanf("%i", &D);
    
    diferenca = (A*B-C*D);
    
    printf("DIFERENCA = %i\n", diferenca);
    
    return 0;
}
