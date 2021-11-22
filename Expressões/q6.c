#include<stdio.h>
 
int main(){
    double a, b;
    scanf("%lf%lf", &a,&b);
    double media = (a+b)/2;
    printf("%.3lf", media);
    return 0;
}