#include<stdio.h>

void somaDivisores(int n){
    int i, soma = 0, ja = 0;
    printf("%d = ", n);
    for(i=1;i<n;i++){
        if(n%i==0){
            soma+=i;
            if(!ja){
                ja = 1;
                printf("%d ", i);
            }
            else printf("+ %d ", i);
        }
    }
    printf("= %d ", soma);
    if(n==soma) printf("(NUMERO PERFEITO)\n");
    else printf("(NUMERO NAO E PERFEITO)\n");
    
}

int main(){
    int n;
    scanf("%d",&n);
    somaDivisores(n);
    return 0;
}