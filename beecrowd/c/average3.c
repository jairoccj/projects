#include <stdio.h>
int main(){
    double A, B, C, D, exame;
    scanf("%lf %lf %lf %lf", &A, &B, &C, &D);
    double media = (A*2+B*3+C*4+D*1)/10.0;
    printf("Media: %.1lf\n", media);
    if(media>=7){
        printf("Aluno aprovado.\n");
    }else if(media<5){
        printf("Aluno reprovado.\n");
    }else if(media<=6.0 && media>=5){
        printf("Aluno em exame.\n");
        scanf("%lf", &exame);
        printf("Nota do exame: %.1lf\n", exame);
        double mediafinal = (exame+media)/2;
        if(mediafinal>=5){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n", mediafinal);
        }else if(mediafinal<5){
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n", mediafinal);
        }
    }
}