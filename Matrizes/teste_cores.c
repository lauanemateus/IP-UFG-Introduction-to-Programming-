#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,m, matriz[50][50], qtd, i,j,cor;
    scanf("%d %d", &n,&m);
    printf("%d %d\n%d\n", n,m,255);
    scanf("%d", &qtd);    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            matriz[i][j] = 255;
    }
    for(int k=0;k<n*m;k++){
        i = rand()%50, j = rand()%50;
        cor = rand()%256;
        matriz[i][j] = cor;
    }
    
    for(int i=0; i<n; i++){
        for(int j=0;j<m; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}