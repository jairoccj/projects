#include <stdio.h>
int main(){
    //12Km/L
    double h, kmh, kml = 12;
    scanf("%lf %lf", &h, &kmh);
    double km = kmh * h;
    double l = km / kml;
    printf("%.3lf\n", l);
}