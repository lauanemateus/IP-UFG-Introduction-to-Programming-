#include<stdio.h>
#include<math.h>

int main(){
    double a,b,c;
    scanf("%lf %lf %lf", &a,&b,&c);
    double delta = b*b - 4*a*c;
    if(delta<0){
        printf("RAIZES IMAGINARIAS\n");
    }
    else{
        if(delta == 0 || a==0){
            double raiz;
            if(a==0){
                raiz = -c/b;
            }
            else raiz = (-b + sqrt(delta))/(2*a);
            printf("RAIZ UNICA\nX1 = %.2lf\n", raiz);
        }
        else{
            double x1 = (-b + sqrt(delta))/(2*a);
            double x2 = (-b - sqrt(delta))/(2*a);
            printf("RAIZES DISTINTAS\nX1 = %.2lf\nX2 = %.2lf\n", fmin(x1,x2), fmax(x1,x2) );
        }
    }
    return 0;
}