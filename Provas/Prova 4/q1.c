#include<stdio.h>
#include<stdlib.h>

#define SAL 1200.00

typedef struct {
    int matricula;
    int idade;
    int numFilhos;
    char sexo;
    double salario;
} FUNCIONARIO;

int main(){
    int n,i;
    double mediaIdade = 0, mediaFilhos = 0;
    int resp[4] = {};
    scanf("%d", &n);

    FUNCIONARIO *x = (FUNCIONARIO*)malloc(n*sizeof(FUNCIONARIO));

    for(i=0;i<n;i++){
        scanf("%d %d %d %c %lf", &x[i].matricula, &x[i].idade, &x[i].numFilhos, &x[i].sexo, &x[i].salario);
        //printf("%d %d %d %c %lf\n", x[i].matricula, x[i].idade, x[i].numFilhos, x[i].sexo, x[i].salario);
        mediaIdade += x[i].idade;
        mediaFilhos += x[i].numFilhos;
    }

    mediaIdade /= n, mediaFilhos /= n;
    //printf("%lf %lf\n", mediaIdade, mediaFilhos);

    for(i=0;i<n;i++){
        if(x[i].idade>mediaIdade && x[i].salario>3*SAL) resp[0]++;
        if(x[i].sexo == 'F' && x[i].numFilhos>mediaFilhos) resp[1]++;
        if(x[i].sexo == 'M' && x[i].numFilhos>mediaFilhos) resp[2]++;
        if(x[i].idade>47 && x[i].salario/(double)(x[i].numFilhos+1)<2*SAL) resp[3]++;
    }
    printf("%d %d %d %d\n", resp[0], resp[1], resp[2], resp[3]);
    free(x);
    return 0;
}
