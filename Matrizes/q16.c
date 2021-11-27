#include<stdio.h>

#define MAXTV 320
#define MAXLOGO 10

int solve(int i, int j, int n,int m, int logo[][MAXLOGO], int tv[][MAXTV]){
    int l,c, ind_i=0, ind_j=0;
    n--;
    if(i+n>=m || j+n>=m) return 0;
    for(l=i;l<=i+n;l++){
        ind_j=0;
        for(c=j;c<=j+n;c++){
            if(tv[l][c]!=logo[ind_i][ind_j]) return 0;
            ind_j++;
        }
        ind_i++;
    }
    return 1;
}

int main(){
    int i,j,n,m, tv[MAXTV][MAXTV], logo[MAXLOGO][MAXLOGO];
    scanf("%d", &n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &logo[i][j]);
        }
    }
    scanf("%d", &m);
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            scanf("%d", &tv[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            if(solve(i,j,n,m,logo,tv)){
                printf("sim\n");
                return 0;
            }
        }
    }
    printf("nao\n");
    return 0;
}