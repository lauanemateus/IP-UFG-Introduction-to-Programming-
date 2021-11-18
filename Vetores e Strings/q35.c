#include<stdio.h>

int acha (int v[], int n, int x){
    int i;
    for(i=0;i<n;i++){
        if(v[i]==x) return 1;
    }
    return 0;
}

int main(){
    int x,ta,tb,i,j, va[100], vb[100], pres = 0, first;
    while(scanf("%d", &ta), ta<1 || ta>100);
    while(scanf("%d", &tb), tb<1 || tb>100);
    for(i=0;i<ta;i++){
        scanf("%d", &x);
        if(acha(va, i, x)) i--;
        else va[i] = x;
    }
    for(i=0;i<tb;i++){
        scanf("%d", &x);
        if(acha(vb, i, x)) i--;
        else vb[i] = x;
    }

    for(i=0;i<ta;i++){
        if(i==0)
            printf("(%d", va[i]);
        else printf(",%d", va[i]);
        
    }
    for(i=0;i<tb;i++){
        for(j=0;j<ta;j++){
            if(vb[i] == va[j]){
                pres = 1;
                break;
            }
        }
        if(pres==0) printf(",%d", vb[i]);
        pres = 0;
    }
    printf(")\n");

    first = 0;
    for(i=0;i<tb;i++){
        for(j=0;j<ta;j++){
            if(vb[i] == va[j]){
                pres = 1;
                break;
            }
        }
        if(first == 0 && pres==1){
            printf("(%d", vb[i]);
            first = 1;
        }
        else if(pres==1) printf(",%d", vb[i]);
        pres = 0;
    }
    if(first==0) printf("()\n");
    else printf(")\n");
    return 0;
}