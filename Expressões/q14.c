#include<stdio.h>
 
int main(){
    char a,b,c;
    scanf("%c %c %c", &a,&b,&c);
    int alg1 = (a-'0'), alg2 = (b-'0'), alg3 = (c-'0');
    int alg4 = (alg1 + alg2*3 + alg3*5)%7;
    int x = alg1*1000 + alg2*100 + alg3*10 + alg4;
    printf("O NOVO NUMERO E = %d\n", x);
    return 0;
}