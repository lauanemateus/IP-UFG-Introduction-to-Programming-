#include<stdio.h>

int main(){
    int n,x,i, v[1000], maior = 0, menor = 10000;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &v[i]);
        if(i!=n-1) printf("%d ", v[i]);
        else printf("%d\n", v[i]);
        if(v[i]>maior) maior = v[i];
        if(v[i]<menor) menor = v[i];
    }
    for(i=n-1;i>=0;i--){
        if(i!=0) printf("%d ", v[i]);
        else printf("%d\n", v[i]);
    }
    printf("%d\n%d\n", maior, menor);
    return 0;
}