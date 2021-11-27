#include<stdio.h>
#include<math.h>

int main(){
    int n,i;
    scanf("%d", &n);
    if(n<0){
        printf("Numero invalido!\n");
        return 0;
    }
    for(i=2;i<n; ++i){
        if(n%i==0) break;
    }
    if(n==1) printf("NAO PRIMO\n");
    else if(i<n-1) printf("NAO PRIMO\n");
    else printf("PRIMO\n");
    return 0;
}