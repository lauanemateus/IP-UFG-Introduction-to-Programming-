#include<stdio.h>

int main(){
    int l,a,borda,x,i,j;
    int m[100][100];
    scanf("%d %d %d %d", &l, &a, &borda, &x);
    for(i=0;i<l;i++){
        for(j=0;j<a;j++){
            if(i+1<=borda || j+1<=borda || a-i<=borda || l-j<=borda) m[i][j] = x;
            else m[i][j] = 0; 
        }
    }
    printf("P2\n%d %d\n255\n", l,a);
    for(i=0;i<l;i++){
        for(j=0;j<a;j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}