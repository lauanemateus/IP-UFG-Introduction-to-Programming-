#include<stdio.h>

const int INF = 400;

int soma(int i, int j, int maior, int grid[][6]){
    int sum = 0,k;
    int dx[] = {0,0,-1,1,0,1,-1}, dy[] = {0,1,1,1,-1,-1,-1};

    if(i==0 || i==5 || j==0 || j==5) return -INF;

    for(k=0;k<7;k++) {
        //if(i+dx[k]<0 || i+dx[k]>=6 || j+dy[k]<0 || j+dy[k]>=6) continue;
        sum += grid[i+dy[k]][j+dx[k]];
    }
    return sum;
}

int main(){
    int grid[6][6], maior=-INF, sum;
    int i,j;
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            scanf("%d", &grid[i][j]);
        }
    }
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            sum = soma(i,j,maior,grid);
            if(maior < sum ) maior = sum;
        }
    }
    printf("%d\n", maior);
    return 0;
}