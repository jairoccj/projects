#include <stdio.h>
//variável antes de todas são globais, se tiver o mesmo nome, preferência à local
int global;

//a varíavel só pode ser acessada dentro da função que ela foi declarada
int soma(int a, int b){
    return a+b;
}

int main(){
    int a = 2, b = 3;
    printf("%d %d\n", a, b);
    printf("soma = %d\n", soma(1,2) );
}