#include<stdio.h>

const int INF = 2000000000;

void ordena(int v[], int n){
    int menor = INF;
    int i,j,ind;
    for(i=0;i<n;i++){
        menor = INF;
        for(j=i; j<n; j++){
            if(v[j]<menor){
                menor = v[j];
                ind = j;
            }
        }
        v[ind] = v[i];
        v[i] = menor;
    }
}

int main(){
    int n,i,j, v[1001];
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &v[i]);
    }
    ordena(v,n);
    //printf("\n");
    for(i=0;i<n;i++){
        printf("%d\n", v[i]);
    }
    return 0;
}