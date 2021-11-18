#include<stdio.h>

#define MAXM 10001

int main(){
    int n,i,j,letras, cons,vog;
    char s[MAXM];
    scanf("%d%*c", &n);
    for(i=0;i<n;i++){
        scanf("%[^\n]%*c", s);
        //printf("%s\n", s);
        j=0, letras=0,cons=0,vog=0;
        while(s[j] != '\0'){
          //  printf("%c", s[j]);
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u' 
            || s[j]=='A' || s[j]=='E' || s[j]=='I' || s[j]=='O' || s[j]=='U' )
                vog++;
            else if((s[j]>='a' && s[j]<='z') || (s[j]>='A' && s[j]<='Z'))
                cons++;
            if(s[j] != ' ' && ((s[j]>='a' && s[j]<='z') || (s[j]>='A' && s[j]<='Z') ) ) {
                letras++;
            }
            j++;
        }
        printf("Letras = %d\nVogais = %d\nConsoantes = %d\n", letras, vog,cons);
    }
    return 0;
}