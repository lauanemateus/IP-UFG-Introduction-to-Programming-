#include<stdio.h>
#include<stdlib.h>

const int MAX = (int)1e5 + 5;

void solve(int n, int d, int ini, int fim, int * cont, int vet[]){
    
}

int main(){
    int n, d,i,j,cont, vet[MAX], ini, fim,x,y, maior;
    char s[MAX];
    while(scanf("%d %d", &n,&d), n || d){
        scanf("%s", s);
        for(i=0;s[i]!='\0';i++){
            vet[i] = s[i] - '0';
        }
        x = 0, y = d;
        for(i=0;i<d;i++){
            maior = -1;
            for(j=x; j < n-y+1; j++){
                if(vet[j]>maior){
                    maior = vet[j];
                    x = j+1;
                }
            }
            printf("%d", maior);
            y--;
        }
        printf("\n");
    }
    return 0;
}