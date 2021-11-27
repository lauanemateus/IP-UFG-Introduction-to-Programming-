#include<stdio.h>
#include<stdlib.h>

int solve(int n, int m, int grid[][10],int v[], int* cont, int x,int i, int j){
    int ki,kj;
    for(ki=0;ki<n;ki++){
        for(kj=0;kj<m;kj++){
            if(ki==i && kj==j) continue;
            if(grid[ki][kj]==x) return 0;
            
        }
    }
    *cont = *cont + 1;
    v[*cont] = x;
    return 0;
}

int main(){
    int n,m, grid[10][10],i,j, v[100]={},cont=-1;
    scanf("%d %d", &n, &m);
    if(n<=0 || m<=0 || n>10 || m>10){
        printf("dimensao invalida\n");
        return 0;
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d", &grid[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            solve(n,m,grid,v,&cont,grid[i][j],i,j);
        }
    }
    if(cont == -1){
        printf("sem elementos unicos");
    }
    for(i=0;i<=cont;i++){
        if(i==0) printf("%d", v[i]);
        else printf(",%d", v[i]);
    }
    printf("\n");
    return 0;
}