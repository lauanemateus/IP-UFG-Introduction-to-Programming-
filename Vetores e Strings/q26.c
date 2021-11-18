#include<stdio.h>
 
#define MAX 257
 
void atualiza(char str[], int j){
    for(j=j ; str[j]!='\0'; j++){
        str[j] = str[j+1];
    }
}
 
char * str_clean(char str[], char clr[]){
    int i,j;
    for(i=0; clr[i] != '\0'; i++){
        for(j=0; str[j]!='\0'; j++){
            if(clr[i] == str[j]){
                atualiza(str, j);
                j--;
            }
        }
    }
    return str;
}
 
int main(){
    char str[MAX], clr[MAX];
    scanf("%[^\n]%*c", str);
    scanf("%[^\n]%*c", clr);
    str_clean(str, clr);
    printf("%s\n",  str_clean(str, clr));
    return 0;
}