#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int numJogo;
    int numero[6];
} CARTELA;


int solve(int k, int x, int v[] ,int mark[]);

void print(int n, CARTELA x, int mark[]);

int main(){
    int n,i,j,num, sort[6], resp,cont=0,mark[6];
    scanf("%d", &n);
    CARTELA *x = (CARTELA*)malloc((n)*sizeof(CARTELA));

    for(i=0;i<n;i++){
        scanf("%d", &x[i].numJogo);
        for(j=0;j<6;j++){
           scanf("%d", &x[i].numero[j]);
       } 
    } 

    scanf("%d", &num);
    for(i=0;i<6;i++){
        scanf("%d", &sort[i]);
    }

    for(i=0;i<n;i++){
        resp = 0;
        for(j=0;j<6;j++){
            mark[j] = 0;
            if(solve(j, x[i].numero[j], sort, mark)) resp++;
        }
        if(resp==4) print(4, x[i], mark);
        if(resp==5) print(5, x[i], mark);
        if(resp==6) print(6, x[i], mark);
        if(resp>=4) cont++;
    }

    if(cont==0) printf("NENHUMA CARTELA PREMIADA PARA O CONCURSO %d\n", num);
    return 0;
}

int solve(int k,int x, int v[], int mark[]){
    int i;
    for(i=0;i<6;i++){
        if(x == v[i]) {
            mark[k] = 1;
            return 1;
        }
    }
    return 0;
}

void print(int n, CARTELA x, int mark[]){
    int i,j;
    if(n==4) printf("QUADRA %d:", x.numJogo);
    if(n==5) printf("QUINA %d:", x.numJogo);
    if(n==6) printf("SENA %d:", x.numJogo);
    
    for(i=0;i<6;i++){
        if(mark[i]) printf(" %d", x.numero[i]);
    }
    printf("\n");
}
