#include<stdio.h>

void esc(int *resp, int *n){
    *resp += 2 * (*n);
}

void branca(int *resp, int *n){
    *resp += (*n);
}

int main(){
    int n, i,j;
    scanf("%d", &n);
    int resp = n;
    for(i=1;i<=8;i++){
        for(j=1;j<=8;j++){
            if(i==1 && j==1) continue;
            if(i%2==1 && j%2==1) esc(&resp, &n);
            if(i%2==1 && j%2==0) branca(&resp, &n);
            if(i%2==0 && j%2==1) branca(&resp, &n);
            if(i%2==0 && j%2==0) esc(&resp, &n);
        }
    }
    printf("%d\n", resp);
    return 0;
}