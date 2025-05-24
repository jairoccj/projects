#include <stdio.h>
#include <stdlib.h>

int main(){
    // Lendo a entrada do exercício
	int x;
	scanf("%f",&x);

    if (x>0){
        printf("positivo");
    }

    if (x==0){
        printf("nulo");
    }

    if (x<0){
        printf("negativo");
    }

    return 0;
}