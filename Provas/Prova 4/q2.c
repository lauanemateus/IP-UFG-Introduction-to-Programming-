#include<stdio.h>
#include<stdlib.h>

/**
* Essa função recebe um valor "n" e retorna um ponteiro
* para uma matriz quadrada de inteiros com dimensão nxn.
* A memória é alocada dinamicamente com uma estrutura
* bidimensional.
*
* @param n Dimensão da matriz
* @return int** Ponteiro para a matriz
*/
int ** cria_matrix( int n );

/**
* Essa função recebe um ponteiro para uma matriz alocada
* dinamicamente e libera a memória ocupada por ela.
*
* @param m Ponteiro para a matriz
*/
void destroi_matrix( int ** m );

/**
* Essa função recebe um ponteiro para uma matriz alocada
* dinamicamente, sua dimensão n e retorna 1 caso essa
* matriz seja uma matriz de permutação ou 0 caso contrário.
* Além disso, essa função também calcula a soma de todos os
* elementos da matriz e a retorna via referência pelo
* ponteiro "soma".
*
* @param m Ponteiro para a matriz
* @param n Dimensão da matriz
* @param soma Ponteiro para inteiro que retornará a soma dos
* elementos da matriz
* @return int 1 caso a matriz seja de permutação
* e 0 caso contrário
*/
int ePermutacao( int ** m, int n, int * soma );

int main(){
    int n,soma=0, resp;
    int ** m = NULL;
    scanf("%d", &n);

    m = cria_matrix(n);
    resp = ePermutacao(m,n,&soma);
    printf("%d\n", n);

    if(resp==1) printf("PERMUTACAO\n");
    else printf("NAO E PERMUTACAO\n");

    printf("%d\n", soma);
    return 0;
}

int ** cria_matrix(int n){
    int i,j;

    int ** m = (int **)malloc(n*sizeof(int*));

    for(i=0;i<n;i++){
        m[i] = (int*)malloc(n*sizeof(int));
    }
    return m;
}

int ePermutacao( int ** m, int n, int * soma ){
    int i,j, Lcont1, Lcont0, Ccont1, Ccont0;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &m[i][j]);
            *soma+=m[i][j];
        }
    }

    for(i=0;i<n;i++){
        Lcont1=0,Lcont0=0,Ccont0=0,Ccont1=0;
        for(j=0;j<n;j++){
            if(m[i][j]==1) Lcont1++;
            if(m[i][j]==0) Lcont0++;
            if(m[j][i]==1) Ccont1++;
            if(m[j][i]==0) Ccont0++;
        }
        if(Lcont1!=1 || Ccont1!=1 || Lcont0!=n-1 || Ccont0!=n-1) return 0;
    }
    return 1;
}

void destroi_matrix( int ** m ){
    free(m);
}
