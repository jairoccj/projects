#include <stdio.h>

float soma (float a,float b) {
    float s = a + b;
    printf("vai aparecer simm\n");
    return s;
    //tbm pode apagar o float s e deixar return a+b
    printf("n vai aparecer");
}

int menor(int a, int b){
    if(a<=b){
        return a;
    }else{
        return b;
    }
}

float media(float a, float b){
    return (a+b)/2;
}

int main(){
    float x,y;
    scanf("%f %f",&x,&y);
    printf("%f\n", media(x,y));
}