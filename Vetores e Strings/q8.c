#include<stdio.h>

const int MAX = 1000000000;

/* int pot(int x){
    int i;
    for(i = MAX; i>=1; i = i/10){
        if(x/i == 0) continue;
        else break;
    }
    return i;
} */

int main(){
    int i,j,x,resp,dig,n,m;
    while(scanf("%d %d", &n, &m), n || m){
        resp = 0;
        x = n+m;
        for(i = MAX; i>=1; i = i/10){
            dig = x/i;
            x = x%i;
            if(dig != 0) {
                resp += dig*i;
            }
            else{
                resp = resp/10;
            }
        }
        printf("%d\n", resp);
    }
    return 0;
}