#include<stdio.h>
 
#define MAX 100000
 
int main(){
    int n,qtd=0,i, mark[MAX],x;
    scanf("%d", &n);
    for(i=0;i<MAX;i++) mark[i] = 0;
    while(qtd<n){
        scanf("%d", &x);
        if(mark[x]==0){
            mark[x] = 1;
            if(qtd!=0) printf(",%d",x);
            else printf("(%d", x);
            qtd++;
        }
    }
    printf(")\n");
    return 0;
}
