#include <stdio.h>
int main (){
    int km;
    double liters;
    scanf("%d %lf", &km, &liters);
    double kml = km/liters;
    printf("%.3lf km/l\n", kml);
}