#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//área do círculo = pi . raio²
int main(){    	
    double raio;
    scanf("%lf", &raio);
    double quadrado = pow(raio,2);
    printf("A=%.4lf\n", quadrado*3.14159);

    return 0;
}
