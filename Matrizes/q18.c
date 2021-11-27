#include<stdio.h>

#define MAX 1000
#define INF 2*1000000000
void ordena(int n, int j, int v[][MAX]){
    int i, k, menor, ind, aux;
    for(i=0;i<n;i++){
        menor = INF;
        for(k=i;k<n;k++){
            if(menor>v[k][j]){
                menor = v[k][j];
                ind = k;
            }
        }
        aux = v[i][j], v[i][j] = menor, v[ind][j] = aux;
    }
}

int main(){
    int n, v[MAX][MAX], menor = INF,ind,aux;
    int i,j,k;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &v[i][j]);
        }
    }
    for(j=0;j<n;j++){
        ordena(n, j, v);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j!=n-1) printf("%d ", v[i][j]);
            else printf("%d\n", v[i][j]);
        }
    }
    return 0;
}