#include<stdio.h>
#include<stdlib.h>
 
int solve(int v[], int *p1, int *p2, int soma){
    int i,j;
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            if(i==j) continue;
            if(soma-v[i]-v[j] == 100){
                *p1 = i, *p2 = j;
                //printf("soma=%d p1=%d p2=%d, soma-v[i]-v[j]=%d\n", soma, i,j, soma-v[i]-v[j]);
                return 0;
            }
        }
    }
    return 0;
}
 
void ordena(int v[], int n){
    int i,j;
    int menor = 101,ind;
    for(i=0;i<n;i++){
        menor = 101;
        for(j=i;j<n;j++){
            if(menor>v[j]) menor = v[j], ind = j;
        }
        v[ind] = v[i];
        v[i] = menor;
    }
}
 
int main(){
    int t, v[9],i,j, soma=0, p1,p2;
    scanf("%d", &t);
    while(t--){
        soma = 0;
        for(i=0;i<9;i++){
            scanf("%d", &v[i]);
            soma+=v[i];
        }
        ordena(v, 9);
        solve(v, &p1, &p2, soma);
        for(i=0;i<9;i++){
            if(i!=p1 && i!=p2){
                printf("%d\n", v[i]);
            }
        }
 
    }
    return 0;
}