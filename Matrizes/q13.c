#include<stdio.h>
#include<stdlib.h>

void PintaTudo(int n, int grid[][200], int x,int y, int cor, int m){
    int i,j;
    if(x-m<0 || y-m<0 || x+m>=n || y+m>=n) return;
    x-=m, y-=m;
    for(i=y;i<=y+2*m; i++){
        for(j=x;j<=x+2*m;j++){
            grid[i][j] = cor;
        }
    }
}

void PintaBorda(int n, int grid[][200], int x,int y, int cor, int m){
    int i,j;
    if(x-m<0 || y-m<0 || x+m>=n || y+m>=n) return;
    x-=m, y-=m;
    for(i=y;i<=y+2*m; i++){
        for(j=x;j<=x+2*m;j++){
            if(i==y || j==x || i==2*m+y || j==2*m+x) grid[i][j] = cor;
        }
    }
}

int main(){
    int i,j, grid[200][200], ind=1;
    int n, cor_fundo, x,y, cor, m, instrucao ;
    scanf("%d %d", &n,&cor_fundo);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            grid[i][j] = cor_fundo;
        }
    }
    while( scanf("%d %d", &x,&y) && x!=-1 && y!=-1){
        scanf("%d %d %d", &cor,&m, &instrucao);
        if(instrucao==2) PintaTudo(n, grid,x,y,cor,m);
        else PintaBorda(n, grid,x,y,cor,m);
    }

    printf("P2\n%d %d\n255\n", n,n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j!=n-1) printf("%d ", grid[i][j]);
            else printf("%d\n", grid[i][j]);
        }
    }
    return 0;
}