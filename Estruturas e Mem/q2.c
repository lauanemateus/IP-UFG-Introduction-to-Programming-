#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct market{
    char frutas[51];
    float preco;
    int qtde;    
} Store;

int eh_igual(char s1[], char s2[]){
    int l1 = strlen(s1), l2 = strlen(s2),i;
    if(l1!=l2) return 0;
    for(i=0;i<l1;i++){
        if(s1[i]!=s2[i]) return 0;
    }
    return 1;
}

int main(){
    int i, t, n, j, p;
    float preco, soma;
    char fruta[51];
    Store *m = NULL;

    scanf("%d", &t);
    while(t--){
        soma = 0;
        scanf("%d", &n);
        m = (Store *)calloc(n, sizeof(Store));
        for(i=0; i<n; i++){
            scanf("%s %f", (m[i].frutas), &(m[i].preco));
        }
        scanf("%d", &p);
        while(p--){
            scanf("%s %f", fruta, &preco);
            for(i=0;i<n;i++){
                if(eh_igual(fruta, m[i].frutas)){
                    soma+=preco*m[i].preco;
                }
            }
        }
        printf("R$ %.2f\n", soma);
    }
    free(m);
    return 0;
}