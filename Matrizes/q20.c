#include<stdio.h>
 
const int INF = (int)2e9;
 
int main(){
    int i,j,n,m, grid[1000][1000], maior=-INF, menor=INF, i_maior=-1, j_maior=-1, i_menor=-1, j_menor=-1;
    scanf("%d %d", &n,&m);
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d", &grid[i][j]);
            if(maior<grid[i][j]) maior = grid[i][j], i_maior=i, j_maior=j;
            if(menor>grid[i][j]) menor = grid[i][j], i_menor=i, j_menor=j;
        }
    }
    if(i_menor!=-1 && i_maior!=-1){
        grid[i_menor][j_menor] = maior;
        grid[i_maior][j_maior] = menor;
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }
    return 0;
}