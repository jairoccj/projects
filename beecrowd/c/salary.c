#include <stdio.h>
int main(){
    int number, hours;
    float perhour;
    scanf("%d", &number);
    scanf("%d", &hours);
    scanf("%f", &perhour);
    float salary = (hours*perhour);
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", salary);
}