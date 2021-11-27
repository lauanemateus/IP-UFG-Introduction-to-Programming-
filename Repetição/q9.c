#include<stdio.h>
#include<math.h>
 
int main(){
    int n,i;
    scanf("%d", &n);
    int fat[n+1];
    fat[0]=1;
    for(i=1;i<=n;i++){
        fat[i]=fat[i-1]*i;
    }
    printf("%d! = %d\n", n,fat[n]);
    return 0;
}