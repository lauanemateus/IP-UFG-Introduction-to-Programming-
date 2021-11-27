#include<stdio.h>

int main(){
     int x;
     scanf("%i", &x);
     if(x%5==0 && x%3==0) printf("O NUMERO E DIVISIVEL\n");
     else printf("O NUMERO NAO E DIVISIVEL\n");
    return 0;
}