#include<stdio.h>

#define MAX 10001

int Abs(int x,int y){
    if(x-y<0) return y-x;
    if(x==y) return 0;
    return 'z' - x + y - 'a' + 1;
}

int main(){
    int n,resp,i,x,y;
    char c[MAX], s[MAX];
    scanf("%d", &n);
    while(n--){
        scanf("%s %s",s,c);
        resp=0;
        for(i=0; s[i]!='\0' && c[i]!='\0'; i++){
            x = (int)s[i], y = (int)c[i];
            resp += Abs(x,y);        }
            printf("%d\n", resp);
    }
    return 0;
}