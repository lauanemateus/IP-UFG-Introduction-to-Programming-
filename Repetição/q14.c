#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d", &n);
    if(n<2) printf("Campeonato invalido!\n");
    else{
        int i,j, cont=1;
        for(i=1;i<n;i++){
            for(j=i+1;j<=n;j++){
                printf("Final %d: Time%d X Time%d\n", cont, i, j);
                cont++;
            }
        }
    }
    return 0;
}