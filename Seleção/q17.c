#include<stdio.h>
#include<math.h>

int main(){
    int n, i, dig=0, aux = 10000;
    scanf("%d", &n);
    for(i=5;i>=1;i--){
        if(n/aux > 0 ){
            if(n/aux > 9) {
                printf("NUMERO INVALIDO\n");
                return 0;
            }
            else{ 
                dig = i;
                break;
            }
        }
        aux = aux/10;
    }
    int v[dig];
    aux = pow(10, dig-1);
    for(i=0; i<dig; i++){
        v[i] = n/aux;
        n = n%aux;
        aux = aux/10;
    }
    aux = dig/2;
    for(i=0; i< aux; i++){
        if(v[i]!=v[dig-1-i]) dig = -1;
    }
    if(dig==-1) printf("NAO PALINDROMO\n");
    else printf("PALINDROMO\n");
    return 0;
}