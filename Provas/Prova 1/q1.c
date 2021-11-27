#include<stdio.h>

int main(){
    int a,b,c,d,e, maior, menor;
    scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
    maior=a, menor=a;
    if(maior<b) maior=b;
    if(maior<c) maior=c;
    if(maior<d) maior=d;
    if(maior<e) maior=e;

    if(menor>b) menor=b;
    if(menor>c) menor=c;
    if(menor>d) menor=d;
    if(menor>e) menor=e;

    printf("MENOR: %d, MAIOR: %d\n", menor, maior);
    if(a>b && b>c && c>d && d>e) printf("ORDENADO DECRESCENTE\n");
    else if(a<b && b<c && c<d && d<e) printf("ORDENADO CRESCENTE\n");
    else printf("DESORDENADO\n");
    return 0;
}