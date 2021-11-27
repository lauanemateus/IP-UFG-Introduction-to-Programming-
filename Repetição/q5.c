#include<stdio.h>
 
int main(){
    int i,a1,r,n, soma=0;
    scanf("%d %d %d", &a1,&r,&n);
    for(i=0;i<n;i++){
        soma+=(a1+r*i);
    }
    printf("%d\n", soma);
    return 0;
}