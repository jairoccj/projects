#include <stdio.h>
#include <math.h>
int main(){
    double x1, y1, x2, y2;
    scanf("%lf", &x1);
    scanf("%lf", &y1);
    scanf("%lf", &x2);
    scanf("%lf", &y2);
    double quadradox = pow(x2 - x1, 2);
    double quadradoy = pow(y2 - y1, 2);
    double formula = quadradox + quadradoy;
    double distance = sqrt(formula);
    printf("%.4lf\n", distance);
}