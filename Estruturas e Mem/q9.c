#include<stdio.h>
 
struct fracao{
    double num;
    double denom;
    double resul;
    char barra;
};
 
int main(){
    double cont=0;
    int i,j,k,t,n,ind;
    char c;
    struct fracao f[51];
    scanf("%d%*c", &t);
 
    for(k=1;k<=t;k++){
        cont = 0;
 
        ind=1;
        while(1){
            scanf("%lf%c%lf", &f[ind].num, &f[ind].barra, &f[ind].denom);
            f[ind].resul = f[ind].num/f[ind].denom;
            c = getchar();
            ind++;
            if(c!=' ') break;
        }
      
        printf("Caso de teste %d\n", k);
 
        for(i=1;i<=ind;i++){
            for(j=i+1;j<=ind;j++){
                if(f[i].resul == f[j].resul){
                    printf("%.0lf/%.0lf equivalente a %.0lf/%.0lf\n", f[i].num, f[i].denom, f[j].num, f[j].denom);
                    cont++;
                }
            }
        }
        if(cont == 0) printf("Nao ha fracoes equivalentes na sequencia\n");
    }
    return 0;
}