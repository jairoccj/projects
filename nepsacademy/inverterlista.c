#include <stdio.h> //biblioteca

int main(){ //criação da main
    int lista[10]; // vetor da lista

    for(int i=0; i<10; i++){ //i vai de 0 a 10
        scanf("%d", &lista[i]); //escaneia os valores e armazena entre i0 e i9
    }
    
    for (int i=9; i>=0; i--){ //começa no i9 e desce até o i0 
    printf("%d\n", lista[i]); //imprime a lista ao contrário
    }
}