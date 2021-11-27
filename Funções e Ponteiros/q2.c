#include<stdio.h>

int fibonacci(int f1, int f2, int n){
    int i, a = f1, b = f2, atual = 0;
    if(n==1) return f1;
    if(n==2) return f2;
    for(i=2; i<n;i++){
        atual = a+b;
        a = b;
        b = atual;
    }
    return atual;
}

int main(){
    int f1,f2,n;
    scanf("%d %d %d", &f1, &f2,&n);
    printf("%d\n", fibonacci(f1,f2,n));
    return 0;
}