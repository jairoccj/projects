#include <stdio.h>

int main(){
    int vetor[10], i, condicao = 0, contador=0;

    for(i=0; i<10; i++){
        scanf("%d", &vetor[i]);
    }

int x; scanf("%d", &x);

for(i=0; i<10; i++){
    if(x==vetor[i]){
    condicao=1;
    contador++;
}}

if(condicao==0){
    printf("Mia x");
}

if(condicao==1){
    printf("%d\n", contador);
    for(i=0; i<10; i++){
        if(x==vetor[i]){
        printf("%d ", i);
    }}
}
}


