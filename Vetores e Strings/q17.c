#include<stdio.h>

int Solve(char c, char s[]){
    int i;
    for(i=0; s[i]!= '\0'; i++){
        if(s[i] == c) return i;
    }
    return -1;
}

int main(){
    int n, resp;
    char c, s[500];
    scanf("%d%*c", &n);
    while(n--){
        scanf("%c %[^\n]%*c", &c, s);
        //printf("li o char(%c) e a string(%s)\n", c,s);
        resp = Solve(c,s);
        if(resp == -1) printf("Caractere %c nao encontrado.\n", c);
        else printf("Caractere %c encontrado no indice %d da string.\n", c, resp);
    }
    return 0;
}