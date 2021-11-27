#include<stdio.h>
#include<stdlib.h>
 
#define MAX_CURSO 100+1
#define MAX_NOME 500+1
 
typedef struct curso{
    int codigo;
    float valor;
    char nome[MAX_CURSO];
} Curso;
 
typedef struct aluno{
    char nome[MAX_NOME];
    int codigo, creditos;
    float mens;
    int ind;
} Aluno;
 
void solve(Curso *c, Aluno *a, int k,int n){
    int i,j;
    for(i=0;i<n;i++){
        if(c[i].codigo == a[k].codigo){
            a[k].mens = c[i].valor*a[k].creditos;
            a[k].ind = i;
            break;
        }
    }
}
 
int main(){
    int n,m,i,j, ind;
    Curso * c = NULL;
    Aluno * a = NULL;
 
    scanf("%d", &n);
    c = (Curso*)malloc(n*sizeof(Curso));
 
    for(i=0;i<n;i++){
        scanf("%d %f%*c%[^\n]", &c[i].codigo, &c[i].valor, c[i].nome);
    }
 
    scanf("%d", &m);
    a = (Aluno*)malloc(m*sizeof(Aluno));
 
    for(i=0;i<m;i++){
        scanf("%*c%[^\n] %d %d", a[i].nome, &a[i].codigo, &a[i].creditos);
    }
    for(i=0;i<m;i++){
        solve(c, a, i, n);
        ind = a[i].ind;
        printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2f Mensalidade: %.2f\n", a[i].nome, c[ind].nome, a[i].creditos, c[ind].valor, a[i].mens );
    }
 
    free(c), free(a);
    return 0;
}