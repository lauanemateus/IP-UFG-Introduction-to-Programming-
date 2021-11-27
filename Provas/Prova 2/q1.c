#include<stdio.h>

int main(){
    int n,i, cont=0;
    scanf("%d", &n);
    if(n<=2 || n>12) {
        printf("Combinacao impossivel\n");
        return 0;
    }
    for(i=1;i<n;i++){
        if((n-i != i) && i<=6 && (n-i)<=6){
            printf("D1: %d, D2: %d\n", i, n-i);
            cont++;
        }
    }
    printf("Ha %d possibilidades\n", cont);
    return 0;
}