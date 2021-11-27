#include<stdio.h>


unsigned long int fat(unsigned int n){
    if(n==0) return 1;
    if(n==1) return 1;
    return n*fat(n-1);
    
}

int main(){
    unsigned int n;
    scanf("%u", &n);
    printf("%u! = %lu\n", n, fat(n));
    return 0;
}