#include<stdio.h>
 
int main(){
    int h, m, s;
    scanf("%i%i%i", &h,&m,&s);
    printf("O TEMPO EM SEGUNDOS E = %i\n", h*3600+m*60+s);
    return 0;
}