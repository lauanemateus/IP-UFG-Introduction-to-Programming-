#include<stdio.h>

int solve(int n, int * v){
    int i,cres;
    for(i=1;i<n;i++){
        if(i==1){
            if(v[i-1]>v[i]) cres = 0;
            else if(v[i]>v[i-1]) cres = 1;
            else return 0;
            continue;
        }
        if(v[i-1]>v[i] && cres==0) return 0;
        if(v[i]>v[i-1] && cres!=0) return 0;
        if(v[i]==v[i-1]) return 0; 
        if(v[i-1]>v[i]) cres = 0;
        else cres = 1;
    }
    return 1;
}

int main(){
    int n, resp, v[10000],i;
    while(scanf("%d", &n), n){
        for(i=0;i<n;i++) scanf("%d", &v[i]);
        resp = solve(n, v);
        if(resp) printf("Intercalada\n");
        else printf("Nao intercalada\n");
    }
    return 0;
}