#include<stdio.h>

#define MAXN 1005

int main(){
    int i,j,n,k, cont=0;
    int v[MAXN];
    do{
        scanf("%d", &n);
    }while(n<1 || n>1000);
    for(i=0;i<n;i++){
        scanf("%d", &v[i]);
    }
    scanf("%d", &k);
    for(i=0;i<n;i++){
        if(v[i]>=k) cont++;
    }
    printf("%d\n", cont);
    return 0;
}