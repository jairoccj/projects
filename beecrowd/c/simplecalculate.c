#include <stdio.h>
int main(){
    int codigo1, quantia1;
    float preco1;
    scanf("%d %d", &codigo1, &quantia1);
    scanf("%f", &preco1);
    int codigo2, quantia2;
    float preco2;
    scanf("%d %d", &codigo2, &quantia2);
    scanf("%f", &preco2);
    float total = quantia1*preco1 + quantia2*preco2;
    printf("VALOR A PAGAR: R$ %.2f\n", total);
}