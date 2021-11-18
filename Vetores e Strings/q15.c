#include<stdio.h>

const int INF = 10000;

int abs(int x){
    if(x<0) return -x;
    return x;
}

int solve(int v[], int n){
    int i,j;
    int menor = INF;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j) continue;
            if(abs(v[i]-v[j]) < menor) menor = abs(v[i]-v[j]);
        }
    }
    return menor;
}

int main(){
    int t,n,v[1001],i,j;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        for(i=0;i<n;i++){
            scanf("%d", &v[i]);
        }
        printf("%d %d\n", solve(v,n), n*n);
    }
    return 0;
}