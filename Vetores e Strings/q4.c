#include<stdio.h>

#define MAXN 5000

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int n,i,j,v[MAXN], cont=0;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &v[i]);
    }
    for(i=0; i<n/2; i++){
        swap(&v[n-1-i], &v[i]);
    }
    for(i=0;i<n;i++){ 
        if(i!=n-1) printf("%d " , v[i]);
        else printf("%d", v[i]);
    }
    return 0;
}