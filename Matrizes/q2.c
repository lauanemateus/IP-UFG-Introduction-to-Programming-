#include<stdio.h>
 
int main(){
    int n,m,i,j,matriz[1000][1000],resp;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &matriz[i][j]);
            if(i==j) printf("%d\n", matriz[i][j]);
        }
    }
    return 0;
}