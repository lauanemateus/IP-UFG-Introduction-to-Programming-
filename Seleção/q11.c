#include<stdio.h>

int main(){
    double a,b,c;
    scanf("%lf%lf%lf", &a,&b,&c);
    if(a<b && a<c){
        printf("%.2lf, ", a);
        if(b>c) printf("%.2lf, %.2lf\n", c,b);
        else printf("%.2lf, %.2lf\n", b,c);
    }
    else if(b<a && b<c){
        printf("%.2lf, ", b);
        if(a>c) printf("%.2lf, %.2lf\n", c,a);
        else printf("%.2lf, %.2lf\n", a,c);
    }
    else if(c<a && c<b){
        printf("%.2lf, ", c);
        if(a>b) printf("%.2lf, %.2lf\n", b,a);
        else printf("%.2lf, %.2lf\n", a,b);
    }
    else if(a==b){
        if(a<c){
            printf("%.2lf, %.2lf, %.2lf\n", a,b,c);
        } 
        else printf("%.2lf, %.2lf, %.2lf\n", c,a,b);
    }
    else if(a==c){
        if(a<b) printf("%.2lf, %.2lf, %.2lf\n", a,c,b);
        else printf("%.2lf, %.2lf, %.2lf\n", b,a,c);
    }
    else if(b==c){
        if(b<a) printf("%.2lf, %.2lf, %.2lf\n", b,c,a);
        else printf("%.2lf, %.2lf, %.2lf\n", a,b,c);
    } 
    return 0;
}