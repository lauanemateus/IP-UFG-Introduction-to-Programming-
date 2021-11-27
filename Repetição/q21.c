#include<stdio.h>
 
int inverte(int n){
    int a,b,c;
    a = n/100;
    n = n%100;
    b = n/10;
    n = n%10;
    c = n;
    return c*100+b*10+a;
}
 
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int a,b;
        scanf("%d %d", &a,&b);
        a = inverte(a), b = inverte(b);
        int maior;
        if(a>b) maior = a;
        else maior = b;
        printf("%d\n", maior);
    }
    return 0;
}