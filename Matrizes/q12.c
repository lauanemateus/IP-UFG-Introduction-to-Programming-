#include<stdio.h>

int main(){
    int i,j,n,m, grid[101][101], soma;
    scanf("%d", &n);
    for(i=0;i<n+1;i++){
        for(j=0;j<n+1;j++)
           scanf("%d", &grid[i][j]);
    }
    for(i=0;i<n+1;i++){
        for(j=0;j<n+1;j++){
           if(i!=n && j!=n){
               soma = grid[i][j] + grid[i][j+1] + grid[i+1][j] + grid[i+1][j+1];
               if(soma>=2) printf("S");
               else printf("U");
           }
        }
        printf("\n");
    }

    return 0;
}