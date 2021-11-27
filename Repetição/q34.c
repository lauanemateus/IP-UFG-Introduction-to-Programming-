#include<stdio.h>

int main(){
    int n,i,first=0;
    scanf("%d", &n);
    while(n<1){
        printf("Fatoracao nao e possivel para o numero %d!\n", n);
        scanf("%d", &n); 
    }
    printf("%d = ", n);
    for(i=2;i<=n;i++){
         while(n%i==0){
             if(first == 0){
                 first = 1; 
                 printf("%d", i);
             }
             else{
                 printf(" x %d", i);
             }
             n = n/i;
         }
    }
    printf("\n");
    return 0;
}