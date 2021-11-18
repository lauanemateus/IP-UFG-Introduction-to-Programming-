#include<stdio.h>

#define MAXN 1001

int main(){
    int n,i,j,v[MAXN], cont=0;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &v[i]);
        if(v[i]%2==0){
            printf("%d ", v[i]);
            cont++;
        }
    }
    printf("%d\n", cont);
    return 0;
}