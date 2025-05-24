#include <stdio.h>

int main(){
    int id;
    scanf("%d", &id);
    switch(id){
        case 1:
        printf("papel");
        break;
        
        case 2:
        printf("tesoura");
        break;

        case 3:
        printf("caneta");
        break;

        case 4:
        printf("cola");
        break;
    default:
        printf("ID nao encontrado");
    }
}