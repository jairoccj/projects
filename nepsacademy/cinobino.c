#include <stdio.h>
#include <stdlib.h>

int main(){
    // Lendo a entrada do exercício
	int B, C;
	scanf("%d",&B);
	scanf("%d",&C);

    int resultado = B+C;
    
    if(resultado%2 == 0){
        printf("Bino");
    }
    
    if(resultado%2 != 0){
        printf("Cino");
    }
    

    return 0;
}