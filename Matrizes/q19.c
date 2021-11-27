#include<stdio.h>

void multiplica_matriz(int n, double m2[][10], double resp[][10]){
    int i,j,t;
    double m1[10][10];
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            m1[i][j] = resp[i][j];
            resp[i][j] = 0;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            for(t=0;t<n;t++){
                resp[i][j] += m1[i][t]*m2[t][j];
            }
        }
    }
}

int main(){
    int i,j,k,n,t;
    double grid[10][10], resp[10][10], ult[10][10];
    scanf("%d %d", &n,&k);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%lf", &grid[i][j]);
            resp[i][j] = grid[i][j];
        }
    }
    for(i=0;i<k-1;i++){
        multiplica_matriz(n, grid, resp);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j!=n-1) printf("%.3lf ", resp[i][j]);
            else printf("%.3lf\n", resp[i][j]);
        }
    }
    return 0;
}