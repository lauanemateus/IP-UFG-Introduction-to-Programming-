#include<stdio.h>

char * solve(int i, char c[]){
    int j;
    if(i == 0) return NULL;
    c[i] = '\0';
    return c;
}

int main(){
    int n,i;
    char s[500];
    scanf("%d", &n);
    while(n--){
        scanf("%d %[^\n]", &i, s);
        if(solve(i,s) == NULL) printf("\n");
        else printf("%s\n", s);  
    }
    return 0;
}