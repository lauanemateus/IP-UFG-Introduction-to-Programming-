#include<stdio.h>

/**
 * funcao que calcula fatorial
 * @param n e o numero da entrada
 * @return fatorial de n: n!
*/
int fat(int n);

/**
 * programa que le um n e dá o fatorial
 */
int main(){
    int n;
    scanf("%d", &n);
    printf("fat de n = %d\n", fat(n));
}

int fat(int n){
    if(n==1) return 1;
    return n*fat(n-1);
}
