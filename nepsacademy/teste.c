#include <stdio.h>

int global = 1; // declaracao da variavel global com valor 1

int aux(){
    printf("%d\n", global); // imprime o valor da variavel global
    
    global = 3; // altera o valor da variavel global para 3
}

int main(){
    printf("%d\n", global); // imprime o valor da variavel global
    
    global = 2; // altera o valor da variavel global para 2
    
    aux(); // chama a funcao aux
    
    printf("%d\n", global); // imprime o valor da variavel global
}