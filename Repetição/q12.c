#include<stdio.h>
#include<math.h>

int main(){
    int n,i,maior=1, cont=1;
    scanf("%d", &n);
    int v[n];
    for(i=0;i<n;i++){
        scanf("%d", &v[i]);
        if(i==0) continue;
        if(v[i]==v[i-1]) cont++;
        else cont=1;
        if(cont>maior) maior = cont; 
    }
    printf("O comprimento do segmento de numeros iguais e: %d\n", maior);
    return 0;
}