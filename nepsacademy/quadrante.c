#include <stdio.h>
#include <stdlib.h>

int main(){    	
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    if(x == 0 || y == 0){
        printf("eixos");
    }

    if(x>0 && y>0){
        printf("Q1");
    }

    if(x<0 && y>0){
        printf("Q2");
    }

    if(x<0 && y<0){
        printf("Q3");
    }

    if(x>0 && y<0){
        printf("Q4");
    }
    
    return 0;
}
