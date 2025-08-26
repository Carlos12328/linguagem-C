/*
Problema: Cálculo de Média Ponderada com Função

Este programa calcula a média final de um aluno com base em duas provas e um trabalho.

Funcionalidades:
- A função main() solicita as notas das duas provas e do trabalho.
- A função mediaNotas() recebe as três notas, calcula uma média parcial das provas
  e, em seguida, calcula a média final ponderada.
- A média final é composta por 70% da média das provas e 30% da nota do trabalho.
- O resultado final é exibido na tela.
*/

#include <stdio.h>

// Função para calcular a média ponderada das notas
float mediaNotas (float prova1,float prova2,float trab){
    float notaParcial, notaFinal;
    printf("\n Inicio da funcao mediaNotas\n");
    getchar();
    printf("prova1 = %.2f \nprova2 = %.2f \ntrab = %.2f\n",prova1,prova2,trab);
    getchar();
    notaParcial = (prova1 + prova2) / 2;
    notaFinal = (notaParcial * 0.7) + (trab * 0.3);
    printf("Fim da funcao mediaNotas\n");
    getchar();
    return notaFinal;
}

// Função principal
int main(){
    float nota1, nota2, notaTrab, mediaFinal;
    printf("Informe a nota da primeira prova ==> ");
    scanf("%f",&nota1);
    printf("Informe a nota da segunda prova ==> ");
    scanf("%f",&nota2);
    printf("Informe a nota do trabalho ==> ");
    scanf("%f",&notaTrab);

    // Chama a função para calcular a média final
    mediaFinal = mediaNotas(nota1,nota2,notaTrab);

    printf("A media final do aluno foi %.1f \n\n",mediaFinal);
    system("pause");
}
