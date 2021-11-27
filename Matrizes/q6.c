#include<stdio.h>

void solve(int i, int j,int n, double grid[][2], double resp[][2]){
    int k;
    for(k = 0; k<n; k++){
        resp[i][j] += grid[i][k] * grid[k][j];
    }
}

int main(){
    int i,j;
    double grid[2][2], resp[2][2];
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%lf", &grid[i][j]);
            resp[i][j] = 0;
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            solve(i,j,2, grid, resp);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            if(j!=1) printf("%.3lf ", resp[i][j]);
            else printf("%.3lf\n", resp[i][j]);
        }
    }
    return 0;
}