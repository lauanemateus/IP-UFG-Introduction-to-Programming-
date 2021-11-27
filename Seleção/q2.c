#include<stdio.h>

int main(){
    int a, b, c;
    scanf("%d%d%d", &a,&b,&c);
    if(a/10 > 0 || b/10>0 || c/10>0) printf("DIGITO INVALIDO\n");
    else{
        a = a*100;
        b=b*10;
        int x = a+b+c;
        printf("%d, %d\n", x, x*x);
    }
    return 0;
}