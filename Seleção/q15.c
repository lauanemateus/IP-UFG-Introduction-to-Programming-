#include<stdio.h>
#define ans "ACO DE GRAU = %d\n" 
int main(){
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    if(a<7 && b>50 && c>80000)
        printf("ACO DE GRAU = %d\n", 10);
    else if(a<7 && b>50) printf(ans , 9);
    else if(a<7) printf(ans , 8);
    else printf(ans , 7);
    return 0;
}