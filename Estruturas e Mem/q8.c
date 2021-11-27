#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
typedef struct curso{
    int codigo;
    float valor;
} Curso;
 
typedef struct aluno{
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
    int n,m,i,j, ind, tam;
    Curso * c = NULL;
    Aluno * a = NULL;
    char buffer[1000];
 
    scanf("%d", &n);
    c = (Curso*)malloc(n*sizeof(Curso));
    char ** nome_curso = (char**)malloc(n*sizeof(char*));
 
    for(i=0;i<n;i++){
        scanf("%d %f%*c%[^\n]", &c[i].codigo, &c[i].valor, buffer);
        tam = strlen(buffer)+1;
        nome_curso[i] = (char*)malloc(tam*sizeof(char));
        strcpy(nome_curso[i], buffer);
    }
 
    scanf("%d", &m);
    a = (Aluno*)malloc(m*sizeof(Aluno));
    char ** nome_aluno = (char**)malloc(m*sizeof(char*));
 
    for(i=0;i<m;i++){
        scanf("%*c%[^\n] %d %d", buffer, &a[i].codigo, &a[i].creditos);
        tam = strlen(buffer)+1;
        nome_aluno[i] = (char*)malloc(tam*sizeof(char));
        strcpy(nome_aluno[i], buffer);
    }
    for(i=0;i<m;i++){
        solve(c, a, i, n);
        ind = a[i].ind;
        printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2f Mensalidade: %.2f\n", nome_aluno[i], nome_curso[ind], a[i].creditos, c[ind].valor, a[i].mens );
    }
 
    free(c);
    free(a);
    free(nome_curso);
    free(nome_aluno);
    return 0;
}
