#include<stdio.h>

const int MAX = 30000;

int SomaDiv(int n){
    int i, soma=0;
    for(i=1;i<n;i++){
        if(n%i==0) soma+=i;
    }
    return soma;
}

int main(){
    int i,v[MAX], resp=0,n, mark[MAX];
    scanf("%d", &n);
    for(i=1;i<=MAX;i++){
        v[i]=0;
        mark[i] = 0;
    }
    v[220] = 284;
    v[284] = 220;
    v[1184] = 1210;
    v[1210] = 1184;
    mark[220]=1, mark[284] = 1, mark[1184] = 1, mark[1210] = 1;

    if(n >= 1){
        printf("(220,284)\n");
    }
    if(n >= 2){
        printf("(1184,1210)\n");
    }

    for(i=1185; i<=MAX, n-2 > resp; i++){
        if(v[i] == 0) v[i] = SomaDiv(i);
        if(v[v[i]] == 0) v[v[i]] = SomaDiv(v[i]);
        if(i == v[v[i]] && mark[i]==0 && mark[v[i]]==0){
            resp ++;
            printf("(%d,%d)\n", i, v[i]);
            mark[i]=1, mark[v[i]]=1;
        }
    }
    return 0;
}