#include<stdio.h>

int main(){
    char s[1000];
    scanf("%[^\n]%*c", s);
    printf("%s", s);

    char c;
    scanf("%*c%*c%*c%c", &c);
    printf("%c\n", c);
    return 0;
}