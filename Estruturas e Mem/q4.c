#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MAX 1000

typedef struct Pontos{
    double a[4];
    double norma;
} Ponto ;

int main(){
    int n,i,j,k,ind,menor;
    scanf("%d", &n);
    Ponto aux;
    Ponto * p = NULL;
    p = (Ponto *)malloc(n*sizeof(Ponto));
    
    for(j=0;j<n;j++){
        p[j].norma=0;
        for(i=0;i<4;i++){
            scanf("%lf", &p[j].a[i]);
            p[j].norma = p[j].norma + pow(p[j].a[i],2); //p[j].a[i]
        }
        p[j].norma = sqrt(p[j].norma);
    }

    for(i=0;i<n;i++){
        menor = 10*MAX;
        for(k=i;k<n;k++){
            if(menor>p[k].norma){
                menor = p[k].norma, ind = k;
            }
        }
        aux = p[i];
        p[i] = p[ind], p[ind] = aux;
    }
    
    for(i=0;i<n;i++){
        printf("Vetor: (%.2lf, %.2lf, %.2lf, %.2lf) Norma: %.2lf\n", p[i].a[0],p[i].a[1],p[i].a[2],p[i].a[3],p[i].norma);
    }

    free(p);
    return 0;
}