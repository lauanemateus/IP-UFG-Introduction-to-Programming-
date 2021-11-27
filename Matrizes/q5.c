#include<stdio.h>

int main(){
    int n,m,i,j;
    scanf("%d %d", &n, &m);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(i%2==1){
                if(j%2==1) printf("1");
                else printf("0");
            }
            else{
                if(j%2==1) printf("0");
                else printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}