#include<stdio.h>

int main(){
    double a,b,c;
    scanf("%lf%lf%lf", &a, &b, &c);
    double media = (a+b+c)/3.0; 
    printf("MEDIA = %.2lf\n" , media);
    if(media>=6) printf("APROVADO\n");
    else printf("REPROVADO\n");
    return 0;
}