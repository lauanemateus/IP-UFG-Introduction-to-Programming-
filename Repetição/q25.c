#include<stdio.h>

int main(){
    int n,i,j=1, impar = 1;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        printf("%d*%d*%d = ", i,i,i);
        for(j=0;j<i;j++){
            printf("%d", impar);
            if(j==i-1) printf("\n");
            else printf("+");
            impar+=2;
        }
    }
    return 0;
}