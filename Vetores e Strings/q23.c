#include<stdio.h>

int main(){
    int t, v[9], b1,b2, i,j, x1=0, x2=0;
    scanf("%d", &t);
    while(t--){
        for(i=0;i<9;i++){
        scanf("%d", &v[i]);
        }
        scanf("%d %d", &b1, &b2);

        x1=0, x2=0;
        for(i=1,j=9; i<=9,j>=1; i++,j--){
            x1 = x1 + v[i-1]*i;
            x2 = x2 + v[i-1]*j;
        }
        if( x1%11 ==b1 && x2%11 == b2){
            printf("CPF valido\n");
        }
        else{
            printf("CPF invalido\n");
        }   
    }
    return 0;
}