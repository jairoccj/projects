#include <stdio.h>
#include <stdlib.h>

int main(){
	int x;
	scanf("%d",&x);

    if(x>0) {
        printf("positivo");
    }

    if(x==0){
        printf("nulo");
    }

    if(x<0){
        printf("negativo");
    }
    

    return 0;
}