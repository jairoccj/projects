#include <stdio.h>
int main(){
    char name;
    double fixo, bonus;
    scanf("%s", &name);
    scanf("%lf", &fixo);
    scanf("%lf", &bonus);
    double total = fixo + bonus*0.15;
    printf("TOTAL = R$ %.2lf\n", total);
}
