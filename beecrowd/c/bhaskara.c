#include <stdio.h>
#include <math.h>
int main(){
    double a, b, c, delta, raiz1, raiz2;
    scanf("%lf %lf %lf", &a, &b, &c);
    delta = (b*b) - (4*a*c);
    raiz1 = (-b+sqrt(delta))/(2*a);
    raiz2 = (-b-sqrt(delta))/(2*a);
    if(delta<=0 || a == 0){
        printf("Impossivel calcular\n");
    }else{
        printf("R1 = %.5lf\n", raiz1);
        printf("R2 = %.5lf\n", raiz2);
    }
}