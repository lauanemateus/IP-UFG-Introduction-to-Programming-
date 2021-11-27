#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

typedef struct aluno{
    int mat, dia, mes, ano;
    char nome[500];
} Aluno;

void Ordena(Aluno * a, int n){
    int i,j,ind;
    int maior;
    Aluno aux;
    for(i=0;i<n;i++){
        maior = -1;
        for(j=i; j<n; j++){
            if(maior<a[j].ano){
                maior = a[j].ano;
                ind = j;
            }
        }
        aux = a[i];
        a[i] = a[ind];
        a[ind] = aux; 
    }

    for(i=0;i<n;i++){
        maior = -1;
        for(j=i; j<n; j++){
            if(a[i].ano == a[j].ano && maior<a[j].mes){
                maior = a[j].mes;
                ind = j;
            }
        }
        aux = a[i];
        a[i] = a[ind];
        a[ind] = aux; 
    }

    for(i=0;i<n;i++){
        maior = -1;
        for(j=i; j<n; j++){
            if(a[i].mes == a[j].mes && a[i].ano == a[j].ano && maior<a[j].dia){
                maior = a[j].dia;
                ind = j;
            }
        }
        aux = a[i];
        a[i] = a[ind];
        a[ind] = aux; 
    }
}

int main(){
    int n,i,j;
    Aluno * a = NULL;

    scanf("%d", &n);
    a = (Aluno*)malloc(n*sizeof(Aluno));
    for(i=0;i<n;i++){
        scanf("%d %d %d %d%*c%[^\n]%*c", &a[i].mat, &a[i].dia, &a[i].mes, &a[i].ano, a[i].nome);
    }
    Ordena(a,n);

    for(i=0;i<n;i++){
        printf("Matric.: %d Nome: %s Data Nasc: %d/%d/%d\n", a[i].mat, a[i].nome, a[i].dia, a[i].mes, a[i].ano);
    }

    free(a);
    return 0;
}