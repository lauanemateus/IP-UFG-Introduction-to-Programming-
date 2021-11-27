#include<stdio.h>
#include<math.h>

#define MAX 128+1

/**
* Converte a string str para o valor inteiro correspondente.
* @param str string contendo um número inteiro
* @return o número inteiro correspondente
*/
long int string2int( const char * str );

int main(){
    char s[MAX];
    while(scanf("%s%*c", s) != -1){
        printf("%s %ld\n", s, string2int(s));
    }
    return 0;
}

long int string2int( const char * str ){
    long int x = 0;
    int i, size=0,j;
    if(str[0]=='-'){
        for(i=1; str[i]!='\0';i++){
            size++;
        }
        for(i=size, j=0; i>=1 ;i--, j++){
            x -= (str[i]-'0')*pow(10,j);  
        }
    }
    else{
        for(i=0; str[i]!='\0';i++){
            size++;
        }
        for(i=size-1,j=0;i>=0;i--,j++){
           x += (str[i] - '0')*pow(10,j);
        }
    }
    return x*(long int)2;
}