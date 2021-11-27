#include<stdio.h>

int main(){
    int i,j,n, m[1000][1000],tr=0, x;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &m[i][j]);
            if(i==j) tr+=m[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            x = m[i][j];
            x*=tr;
            x+=m[j][i];
            if(j!=n-1) printf("%d ", x);
            else printf("%d\n", x);
        }
    }

    return 0;
}