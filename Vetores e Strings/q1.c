#include<stdio.h>

#define MAXN 100005
#define MAXM 1005

int main(){
    int n,i,j,m, v[MAXN];
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &v[i]);
    }
    scanf("%d", &m);
    for(i=0;i<m;i++){
        int x, achou = 0;
        scanf("%d", &x);
        for(j=0;j<n;j++){
            if(v[j]==x){achou = 1; break;}
        }
        if(achou) printf("ACHEI\n");
        else printf("NAO ACHEI\n");
    }
    return 0;
}