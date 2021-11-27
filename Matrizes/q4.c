#include<stdio.h>

#define MAXN 10
#define MAXM 10

int main(){
    int n,m,i,j, matrix[MAXN+1][MAXM+1];

    scanf("%d", &n);
    while(n<1 || n>10) scanf("%d", &n);
    scanf("%d", &m);
    while(m<1 || m>10) scanf("%d", &m);

    for(i=1;i<=n;i++){
        printf("linha %d: ", i);
        for(j=1;j<=m;j++){
            scanf("%d", &matrix[i][j]);
            if(j!=m) printf("%d,", matrix[i][j]);
            else printf("%d\n", matrix[i][j]);
        }
    }
    return 0;
}