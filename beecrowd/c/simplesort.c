#include <stdio.h>
int main(){
    int num[3];
    for(int i=0;i<3;i++){
        scanf("%d", &num[i]);
    }
    if(num[0]<=num[1] && num[1]<=num[2]){
        printf("%d\n%d\n%d\n\n", num[0], num[1], num[2]);
        for(int i=0;i<3; i++){
            printf("%d\n", num[i]);
        }
    }else if(num[1]<=num[2] && num[2]<=num[0]){
        printf("%d\n%d\n%d\n\n", num[1], num[2], num[0]);
        for(int i=0;i<3; i++){
            printf("%d\n", num[i]);
        }
    }else if(num[2]<=num[0] && num[0]<=num[1]){
        printf("%d\n%d\n%d\n\n", num[2], num[0], num[1]);
        for(int i=0;i<3; i++){
            printf("%d\n", num[i]);
        }
    }else if(num[2]<=num[1] && num[1]<=num[0]){
        printf("%d\n%d\n%d\n\n", num[2], num[1], num[0]);
        for(int i=0;i<3; i++){
            printf("%d\n", num[i]);
        }
    }else if(num[0]<=num[2] && num[2]<=num[1]){
        printf("%d\n%d\n%d\n\n", num[0], num[2], num[1]);
        for(int i=0;i<3; i++){
            printf("%d\n", num[i]);
        }
    }else if(num[1]<=num[0] && num[0]<=num[2]){
        printf("%d\n%d\n%d\n\n", num[1], num[0], num[2]);
        for(int i=0;i<3; i++){
            printf("%d\n", num[i]);
        }
    }
}