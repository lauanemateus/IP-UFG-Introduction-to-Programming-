#include<stdio.h>

void converteEmNotasMoedas(int n){
    int n100=0,n50=0,n10=0,n1=0;
    n100 = n/100;
    n %= 100;
    n50 = n/50;
    n %= 50;
    n10 = n/10;
    n %= 10;
    n1 = n;
    printf("NOTAS DE 100 = %d\nNOTAS DE 50 = %d\nNOTAS DE 10 = %d\nMOEDAS DE 1 = %d\n", n100,n50,n10,n1);
}

int main(){
    int n;
    scanf("%d", &n);
    converteEmNotasMoedas(n);
    return 0;
}