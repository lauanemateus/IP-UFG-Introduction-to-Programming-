#include<stdio.h>
#include<math.h>
 
int main(){
    float x, P;
    scanf("%f", &x);
    float a = x+0.05;
    P = 10;
    a = (int)(a*10)/10.0;
    float b = x+0.005;
    P=100;
    b = (int)(b*100)/100.0;
    float c  = x+0.0005;
    P=1000;
    c = (int)(c*1000)/1000.0;
    printf("%.6f\n%.6f\n%.6f\n", a,b,c);
    return 0;
}