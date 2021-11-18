#include<stdio.h>

int main(){
    int n, i,j, bits[32];
    while(scanf("%d", &n) != EOF){
        i=0;
        if(n==0) printf("0\n");
        while(n!=0){
            bits[i] = n%2;
            i++;
            n=n/2;
        }
        for(j=i-1;j>=0; j--){
            printf("%d", bits[j]);
        }
        printf("\n");
    }
    return 0;
}