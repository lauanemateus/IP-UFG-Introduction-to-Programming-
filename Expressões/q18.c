#include<stdio.h>

int main(){
    float a,b,c,d,e,f;
    scanf("%f%f%f%f%f%f", &a,&b,&c,&d,&e,&f);
    float D = a*e-d*b, Dx = c*e-b*f, Dy = a*f-c*d;
    float x = Dx/D, y = Dy/D;
    printf("O VALOR DE X E = %.2f\nO VALOR DE Y E = %.2f\n", x,y);
    return 0;
} //7 8 12 3 5 9