#include<stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    if(x<1) printf("Y = %d\n", x);
    if(x==1) printf("Y = %d\n", 0);
    if(x>1) printf("Y = %d\n", x*x);
    return 0;
}