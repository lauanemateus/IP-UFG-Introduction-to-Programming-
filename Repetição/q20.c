#include<stdio.h>

int main(){
    int n, m, i=1, j=1;
    scanf("%d %d", &n,&m);
    int ind = n;
    if(m<n) ind=m;
    for(i=1;i<=n;i++){
        j=1;
        while(j<i && j<=m){
            printf("(%d,%d)", i, j);
            if(j!=m) printf("-");
            j++;
        }
        printf("\n");
    }
    return 0;
}