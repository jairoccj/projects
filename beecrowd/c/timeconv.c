#include <stdio.h>
int main(){
    int value;
    int time[] = {3600, 60, 1};
    int contador[3] = {0};
    scanf("%d", &value);

    for(int i = 0; i < 3; i++){
        contador[i] = value / time[i];
        value %= time[i];
    }
    printf("%d:%d:%d\n", contador[0], contador[1], contador[2]);
}