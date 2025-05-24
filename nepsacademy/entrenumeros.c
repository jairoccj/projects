#include <stdio.h>

int main(){
    int x, y, menor, maior;

    scanf("%d", &x);
    scanf("%d", &y);
    
    if(x>y){
        maior = x;
        menor = y;
    }
    else{
        maior = y;
        menor = x;
    }
    while (menor <= maior){
        printf("%d ", menor );
        menor++;
    }
    return 0;
}