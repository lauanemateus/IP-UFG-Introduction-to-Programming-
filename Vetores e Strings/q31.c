#include<stdio.h>

#define MAXN 10000
#define MAXM 1001

void CountingSort(int v[], int V[], int n){
    int i,j;
    for(i=0;i<MAXM;i++) V[i] = 0;
    for(i=0;i<n;i++){
        V[v[i]]++;
    }

    int k=0;
    for(i=0; i<MAXM;i++){
        for(j=0;j<V[i];j++,k++){
            v[k] =  i;
        }
    }
}

int main(){
    int v[MAXN], V[MAXM],i,j, n;
    while(scanf("%d", &n), n){
        for(i=0;i<n;i++){
            scanf("%d", &v[i]);
        }
        CountingSort(v, V, n);
        for(i=0;i<n;i++){
            if(i!=n-1) printf("%d ", v[i]);
            else printf("%d\n", v[i]);
        }
    }
    printf("\n");
    return 0;
}