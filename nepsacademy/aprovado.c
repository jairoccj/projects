#include <stdio.h>
#include <stdlib.h>

int main(){
    // Lendo a entrada do exercício
	double A, B;
	scanf("%lf",&A);
	scanf("%lf",&B);

    double resultado = (A+B)/2;

    if(resultado>=7){
    printf("Aprovado");
    }

    if(resultado<7 && resultado>=4){
    printf("Recuperacao");
    }

    if(resultado<4){
    printf("Reprovado");
    }
    
    return 0;
}