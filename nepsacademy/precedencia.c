#include <stdio.h>

int main(){
    float nota1, nota2, nota3, nota4, nota5;
    printf("Digite a nota de linguagens\n");
    scanf("%f", &nota1);
    printf("Digite a nota de humanas\n");
    scanf("%f", &nota2);
    printf("Digite a nota de natureza\n");
    scanf("%f", &nota3);
    printf("Digite a nota de redação\n");
    scanf("%f", &nota4);
    printf("Digite a nota de matematica\n");
    scanf("%f", &nota5);
    printf("Media = %f\n", (nota1+nota2+nota3+nota4+nota5)/5);
}