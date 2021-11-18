#include<stdio.h>

int main(){
    int v[1000000], cont[101];
    int n,i,j;
    int maior = -1, resp;
    scanf("%d", &n);

    for(i=0;i<=100;i++) cont[i]=0;

    for(i=0;i<n;i++){
        scanf("%d", &v[i]);
        cont[v[i]]++;
    }

    for(i=0;i<=100;i++){
        if(maior<cont[i]){
            maior = cont[i];
            resp = i;
        }
    }

    printf("%d\n%d\n", resp, cont[resp]);

    return 0;
}