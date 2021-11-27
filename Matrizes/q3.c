#include<stdio.h>
 
int main(){
    int n,m,i,j,matriz[1000][1000],resp;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i=n-1,j=0; i>=0; i--,j++){
        printf("%d\n", matriz[j][i]);
    }
    return 0;
}