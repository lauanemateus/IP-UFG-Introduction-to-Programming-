#include<stdio.h>
#include<string.h>

int main(){
    int n, a,b,i,t;
    char resp[100000*2] = {};
    char *p;

    scanf("%d", &n);
    while(n--){
        scanf("%d %d", &a,&b);
        p = resp;
        for(i=a; i<=b; i++){
            sprintf(p, "%d", i);
            t = strlen(p);
            p += t;
        }
        t = strlen(resp);
        for(i=0; i<t; i++){
            resp[t+i] = resp[t-i-1];
        } 
        resp[t*2] = '\0';
        printf("%s\n", resp);
    }
    return 0;
}