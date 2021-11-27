#include<stdio.h>
#include<stdlib.h>

int solve(int ** p, int i, int j,int n,int m){
    int dy[] = {-1,1,0,0}, dx[] = {0,0,1,-1};
    if(i==0) dy[0] = n-1;
    if(j==0) dx[3] = m-1;
    if(i==n-1) dy[1] = -i;
    if(j==m-1) dx[2] = -j;
    if(p[i+dy[0]][j+dx[0]] == 4 && p[i+dy[1]][j+dx[1]]==8 && p[i+dy[2]][j+dx[2]]==0 && p[i+dy[3]][j+dx[3]]==0) return 1;
    return 0;
}

int main(){
    int i,j,n,m;
    int **p = NULL;
    scanf("%d %d", &n,&m);

    p = (int**)malloc(n*sizeof(int*));
    for(i=0;i<n;i++){
        p[i] = (int*)malloc(m*sizeof(int));
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d", &p[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(p[i][j]==1111){
                if(solve(p, i,j,n,m)){
                    printf("%d %d\n", i,j);
                    return 0;
                }
            }
        }
    }
    printf("WALLY NAO ESTA NA MATRIZ\n");
    //printf("terminou\n");

    free(p);
    return 0;
}