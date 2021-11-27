#include<stdio.h>

int main(){
    int i,n,soma=0;
    scanf("%d", &n);
    printf("%d = ", n);
    for(i=1;i<n;i++){
        if(i==1){
             printf("%d ", i);
             soma+=i;
        }
        else if(n%i==0){
            printf("+ %d ", i);
            soma+=i;
        }
    }
    printf("= %d ", soma);
    if(n==soma) printf("(NUMERO PERFEITO)\n");
    else printf("(NUMERO NAO E PERFEITO)\n");
    return 0;
}