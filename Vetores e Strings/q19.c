#include<stdio.h>
#include<string.h>

int solve(char s[]){
    int i;
    int resp = 0, now = 1;
    char c = s[0];
    for(i=0; s[i]!='\0'; i++){
            if(i==0) continue;
            if(s[i-1] == ' '){
                if(s[i] == c || (s[i]-c)==32 || (c-s[i])==-32 ) now++;
                else {
                    if(now != 1) resp++;
                    now = 1;
                    c = s[i];
                }
            }
    }
    if(now!=1) resp++;
    return resp;
}

int main(){
    char s[5100];
    while( scanf("%[^\n]%*c", s) != EOF ){
        printf("%d\n", solve(s));
    }
    return 0;
}