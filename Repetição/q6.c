#include<stdio.h>

int main(){
    int n,i;
    scanf("%d", &n);
    if(n<=1) printf("Numero invalido!\n");
    else{
        double soma=0;
        for(i=1;i<=n;i++){
            soma += (1.0/i);
        }
        printf("%lf\n", soma);
    }
    return 0;
}