#include<stdio.h>

void zera_vetor(int v[]){
    int i=0;
    for(i=0;i<10;i++) v[i] = 0;
}

int verifica(int qtd[]){
    int i;
    for(i=1;i<=9;i++){
        if(qtd[i]!=1) return 0;
    }
    return 1;
}

int main(){
    int grid[9][9], qtd[10]={};
    int i,j;

    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            scanf("%d", &grid[i][j]);
        }
    }
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            if(grid[i][j]<1 || grid[i][j]>9){
                printf("invalido\n");
                return 0;
            }
            qtd[grid[i][j]]++;
        }
        if(!verifica(qtd)){
            printf("invalido\n");
            return 0;
        }
        zera_vetor(qtd);
    }
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            qtd[grid[j][i]]++;
        }
        if(!verifica(qtd)){
            printf("invalido\n");
            return 0;
        }
        zera_vetor(qtd);
    }
    printf("valido\n");
    return 0;
}