#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c;
    scanf("%f%f%f", &a,&b,&c);
    if(a<b+c && b<a+c && c<a+b && abs(b-c)<a && abs(a-c)<b && abs(a-b)<c) 
        printf("Perimetro = %.1f\n", a+b+c);
    else printf("Area = %.1f", (a+b)*c/2);
    return 0;
}