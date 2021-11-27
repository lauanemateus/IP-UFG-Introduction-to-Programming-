#include<stdio.h>
#include<math.h>

#define UNICA 1
#define DUAS 2
#define IMAG 3

int raizes(double a, double b, double c, double * x1, double * x2);
//void _abs(double * x1, double * x2);

int main(){
    double a, b, c, x1, x2;
    scanf("%lf %lf %lf", &a,&b,&c);
    int resp = raizes(a,b,c, &x1, &x2);
   // _abs(&x1,&x2);
    switch(resp){
        case UNICA :
            printf("RAIZ UNICA\nX1 = %.2lf\n", x1);
            break;
        case DUAS :
            printf("RAIZES DISTINTAS\nX1 = %.2lf\nX2 = %.2lf\n", x1, x2);
            break;
        case IMAG : 
            printf("RAIZES IMAGINARIAS\n");
    }
    return 0;
}

int raizes(double a, double b, double c, double * x1, double * x2){
    if(a==0){
        if(c!=0) *x1 = -b/c;
        else *x1 = -0;
        return UNICA;
    }
    int delta = b*b - 4*a*c;
    if(delta<0) return IMAG;
    if(delta == 0){
        *x1 = -b/(2*a);
        return UNICA;
    }
    *x1 = (-b + sqrt(delta))/(2*a);
    *x2 = (-b - sqrt(delta))/(2*a);
    return DUAS; 
}

/* void _abs(double * x1, double * x2){
    if(*x1 == 0) *x1 = - *x1;
    if(*x2 == 0) *x1 = - *x1;   
} */ 