#include<stdio.h>

int main(){
    int i,j,n,m, grid[1000][1000], ind=1;;
    scanf("%d %d", &n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(j==0){
                if(i%2==0) grid[i][j]=0;
                else{
                    grid[i][j]=ind;
                    ind++;
                }
            }
            else if(grid[i][j-1]==0){
                grid[i][j] = ind;
                ind++;
            }
            else grid[i][j] = 0;
            if(j!=m-1) printf("%d ", grid[i][j]);
            else printf("%d\n", grid[i][j]);
        }
    }
    return 0;
}