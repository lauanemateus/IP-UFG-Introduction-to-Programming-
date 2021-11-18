#include<stdio.h>

int main(){
    int i,j,v[5001],resp=0;
    int n, x[5001];
    scanf("%d", &n);
    for(i=0;i<5001;i++){
        v[i]=0;
    }
    for(i=0;i<n;i++){
        scanf("%d", &x[i]);
        v[x[i]]++;
    }
    for(i=0;i<n;i++){
        if(v[x[i]] == 1) resp++;
    }
    printf("%d\n", resp);
    return 0;
}