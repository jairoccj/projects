#include <stdio.h>

int main() {
    double valor;
    int notas[] = {100, 50, 20, 10, 5, 2};
    int contador1[6] = {0};

    // Lê o valor com duas casas decimais
    scanf("%lf", &valor);

    // Converte para centavos (multiplica por 100)
    int valorEmCentavos = (int)(valor * 100 + 0.5);  // Arredonda para o inteiro mais próximo

    printf("NOTAS:\n");

    // Calculando as notas
    for (int i = 0; i < 6; i++) {
        contador1[i] = valorEmCentavos / (notas[i] * 100);  // Calcula as notas em centavos
        valorEmCentavos = valorEmCentavos % (notas[i] * 100);  // Atualiza o valor restante
        printf("%d nota(s) de R$ %d,00\n", contador1[i], notas[i]);
    }

    printf("MOEDAS:\n");

    // Moedas: usando 1 centavo, 50 centavos, etc.
    double moedas[] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
    int contador2[6] = {0};

    // Calculando as moedas
    for (int i = 0; i < 6; i++) {
        contador2[i] = valorEmCentavos / (moedas[i] * 100);  // Calcula as moedas em centavos
        valorEmCentavos = valorEmCentavos - (moedas[i] * 100);  // Atualiza o valor restante
        printf("%d moeda(s) de R$ %.2f\n", contador2[i], moedas[i]);
    }

    return 0;
}