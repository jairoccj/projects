#include <stdio.h>
#include <stdlib.h>

int main(){    	
    int n1;
    scanf("%d", &n1);

    int n2;
    scanf("%d", &n2);
    
    int nota = (n1*2+n2*3)/5;
    
    if(nota>=7){
        printf("Aprovado\n");
    }
    if(nota<3){
        printf("Reprovado\n");
    }
    if(nota<7 && nota>=3){
        printf("Final\n");
    }
    return 0;
}
