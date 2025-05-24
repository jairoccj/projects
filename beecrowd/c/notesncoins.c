#include <stdio.h>
#include <math.h>
int main(){
    double valor;
    int notas[] = {100, 50, 20, 10, 5, 2 };
    int contador1[6] = {0};

    scanf("%lf", &valor);

    printf("NOTAS:\n");

    for(int i=0; i<6; i++){
        contador1[i] = valor / notas[i];
        valor = valor - contador1[i] * notas[i];
        printf("%d nota(s) de R$ %d.00\n", contador1[i], notas[i]);
    }


    printf("MOEDAS:\n");


    double moedas[] = {1.00, 0.5, 0.25, 0.10, 0.05, 0.01 };
    int contador2[6] = {0};
    double valorcentavos = (int)(valor*100);

    for(int i=0; i<6; i++){
        contador2[i] = valorcentavos / (int)(moedas[i] * 100);
        valorcentavos = valorcentavos - contador2[i] * (int)(moedas[i] * 100);
        printf("%d moeda(s) de R$ %.2lf\n", contador2[i], moedas[i]);
    }
}