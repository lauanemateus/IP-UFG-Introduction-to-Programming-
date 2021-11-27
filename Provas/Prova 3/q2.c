#include<stdio.h>
 
int main(){
    int n, m[10][10],i,j;
    int eh_biss = 1;
    scanf("%d", &n);
    if(n<1 || n>10){
        printf("dimensao invalida\n");
        return 0;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &m[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            if(m[i][j] != m[n-j-1][n-i-1]){
                //printf("eh dif m[%d][%d] e m[%d][%d], i=%d, j=%d\n", i,j,n-j,n-i,i,j);
                eh_biss = 0;
                break;
            }
        }
    }
 
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(m[i][j] != m[j][i]){
                //printf("eh dif m[%d][%d] e m[%d][%d], i=%d, j=%d\n", i,j,j,i,i,j);
                eh_biss = 0;
                break;
            }
        }
    }
 
    if(eh_biss) printf("bissimetrica\n");
    else printf("nao bissimetrica\n");
    return 0;
}
