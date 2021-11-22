#include<stdio.h>
#include<math.h>
 
int main(){
    double a,b,c;
    scanf("%lf%lf%lf", &a,&b,&c);
    double p = (a+b+c)/2;
    double aux = p*(p-a)*(p-b)*(p-c);
    // printf("aux=%lf", aux);
    double area = sqrt(aux);
    printf("A AREA DO TRIANGULO E = %.2lf\n", area);
    return 0;
}