#include <stdio.h>


int main(){
    int vetor[10], i, condicao = 0;
    
    for(i=0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }

    int x; scanf("%d", &x);

    for(i=0; i < 10; i++){
    if(x==vetor[i]){
        condicao = 1;
    }
    }

    if(condicao==0){
        printf("NAO");
    }
    if(condicao==1){
        printf("SIM");
    }
}