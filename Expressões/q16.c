#include<stdio.h>
 
 
int main(){
    int x, alg[3];
    scanf("%d", &x);
    alg[0] = x/100;
    x=x%100;
    alg[1] = x/10;
    x%=10;
    alg[2] = x;
    printf("%d%d%d\n", alg[2], alg[1], alg[0]);
    return 0;
}
