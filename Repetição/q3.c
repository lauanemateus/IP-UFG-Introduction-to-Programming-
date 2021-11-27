#include<stdio.h>

int main(){
    int n,i;
    scanf("%d", &n);
    for(i=2;i<=n;i+=2){
        printf("%d^%d = %d\n", i,2,i*i);
    }
    return 0;
}