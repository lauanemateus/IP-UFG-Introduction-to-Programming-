#include<stdio.h>
#include<math.h>

const int MAX = 1000000000;

int pot(int x){
    int i;
    for(i = MAX; i>=1; i = i/10){
        if(x/i == 0) continue;
        else break;
    }
    return i;
} 

int size(int x){
    int i,j=0;
    i = pot(x);
    for(i = i*10; i != 1; i = i/10){
        j++;
    }
    return j;
} 


int main(){
    int i,j,x,resp,dig,n,m, v[10], tam;
    while(scanf("%d %d", &n,&m) != EOF, n || m){
        x = n+m;
        tam = size(x);
        j=0;
        for(i = pot(x); i>=1; i = i/10){
            dig = x/i;
            x = x%i;
            v[j] = dig;
            j++;
        }
        for(i=0;i<tam;i++){
            if(v[i]!=0) printf("%d", v[i]);
        }
        printf("\n");
    }
    return 0;
}