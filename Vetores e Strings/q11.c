#include<stdio.h>

int main(){
    int n,i,j,x, v[10000], notas[11], maior=0, ind=0;
    scanf("%d", &n);
    for(i=0;i<=10;i++){
        notas[i]=0;
    }
    for(i=0;i<n;i++){
        scanf("%d", &v[i]);
        notas[v[i]]++;
        if(v[i]>maior) {
            ind = i;
            maior = v[i];}
    }
    printf("Nota %d, %d vezes\nNota %d, indice %d\n", v[n-1], notas[v[n-1]], maior, ind);
    return 0;
}