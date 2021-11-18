#include<stdio.h>

int main(){
    int i,j;
    int n, x[1000];
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &x[i]);
        if(i==0) {
            printf("%d\n", x[i]);
            continue;
        }
        if(x[i]!=x[i-1]) printf("%d\n", x[i]);
    }

    return 0;
}