#include <stdio.h>
#include <math.h>
int main(){
    double R;
    scanf("%lf", &R);
    double formula = pow(R,3) * (4.0/3) * 3.14159;
    printf("VOLUME = %.3lf\n", formula);
}