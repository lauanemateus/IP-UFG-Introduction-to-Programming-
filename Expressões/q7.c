#include<stdio.h>
 
int main(){
    double h,a;
    scanf("%lf%lf", &h,&a);
    double raizde3, ak = 1.5, bk=3/ak, aux=1;
    int i = 0;
    while( aux > 0.0001 ){
        ak = (ak+bk)/2;
        bk = 3/ak;
        if(bk*bk>=3) aux = bk*bk-3;
        else aux = 3-bk*bk;
    }
    raizde3=ak;
    double Ab = 3.0*a*a*raizde3/2;
    double V = (1.0/3.0)*Ab*h;
    printf("O VOLUME DA PIRAMIDE E = %.2lf METROS CUBICOS\n", V);
    return 0;
}