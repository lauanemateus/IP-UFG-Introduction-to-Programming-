#include<stdio.h>

int main(){
    int i;
    double a,b,c;
    scanf("%d %lf %lf %lf", &i,&a,&b,&c);
    double maior=a;
    if(maior<b) maior=b;
    if(maior<c) maior=c;
    double menor=a;
    if(menor>b) menor=b;
    if(menor>c) menor=c;
    double meio=a+b+c-maior-menor;
    if(i==1) printf("%.2lf %.2lf %.2lf\n", menor,meio,maior);
    if(i==2) printf("%.2lf %.2lf %.2lf\n", maior,meio,menor);
    if(i==3) printf("%.2lf %.2lf %.2lf\n", meio,maior,menor);

    printf("meio=%lf", meio);
    return 0;
}