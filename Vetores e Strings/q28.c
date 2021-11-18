#include<stdio.h>

int main(){
    char s[51];
    int i=0,j=0;
    while(scanf("%[^\n]%*c", s) != EOF){
        i=0, j=0;
        while(s[j]!='\0'){
            if(s[j] != ' '){
                if(i%2==0){
                    if(s[j]>='a' && s[j]<='z'){
                        s[j] = s[j] - 32;
                    }
                }
                else{
                    if(s[j]>='A' && s[j]<='Z'){
                        s[j] = s[j] + 32;
                    }
                }
                i++;
            }
            j++;
        }
        printf("%s\n", s);
    }
    return 0;
}