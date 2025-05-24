#include <stdio.h>
int main(){
    int valor;
    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    int contador[7] = {0};

    scanf("%d", &valor);

    printf("%d\n", valor);

    for(int i=0; i<7; i++){
        contador[i] = valor / notas[i];
        valor %= notas[i];
    }

    for(int i=0; i<7 ; i++){
        printf("%d nota(s) de R$ %d,00\n", contador[i], notas[i]);
    }
}
