#include <stdio.h>
int main (){
    float a,b,c;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    float media = (a*2+b*3+c*5)/(2+3+5);
    printf("MEDIA = %.1f\n", media);
}