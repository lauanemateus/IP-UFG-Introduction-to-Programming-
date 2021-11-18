#include<stdio.h>

#define MAX 1000

int main(){
    int i,n,k, v[MAX], qtd=0;
    scanf("%d %d", &n,&k);
    for(i=0;i<n;i++){
        scanf("%d", &v[i]);
        if(v[i]<=0) qtd++;
    }
    if(qtd<k) printf("SIM\n");
    else{
        printf("NAO\n");
        for(i=n-1;i>=0;i--){
            if(v[i]<=0) printf("%d\n", i+1);
        }
    }
    return 0;
}