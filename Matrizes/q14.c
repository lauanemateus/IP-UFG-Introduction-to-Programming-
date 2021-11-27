#include<stdio.h>

int main(){
    int i,j,n,m, grid[1000][1000], qtd[1001]={}, maior=-1, menor=1001;
    scanf("%d %d", &n,&m);
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d", &grid[i][j]);
            qtd[grid[i][j]]++;
            if(maior<grid[i][j]) maior = grid[i][j];
            if(menor>grid[i][j]) menor = grid[i][j];
        }
    }
    printf("%d %.2lf%%\n%d %.2lf%%\n", menor, 100.0*(double)(qtd[menor])/(double)(n*m), maior, 100.0*(double)(qtd[maior])/(double)(n*m));
    return 0;
}