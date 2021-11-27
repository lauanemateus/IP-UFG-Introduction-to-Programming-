#include<stdio.h>
#include<stdlib.h>

typedef struct{
    float *coeficiente;
    int maior_exp;
} poly;

void leitura(poly *p, int n){
    int i,j,e;
    float c;
    for(i=0;i<n;i++){
        if(i==0){
            scanf("%f %d", &c, &e);
            p->maior_exp = e;
            p->coeficiente = (float*)calloc(e+1, sizeof(float));
            p->coeficiente[e] = c;
            continue;
        }
        scanf("%f %d", &c, &e);
        p->coeficiente[e] = c;
    }
}

void soma(poly p1, poly p2, poly *resul){
    int e = p1.maior_exp,i;
    if(p2.maior_exp>e) e = p2.maior_exp;
    resul->maior_exp = e;
    resul->coeficiente = (float*)calloc(e+1, sizeof(float));
    for(i=0;i<=e;i++){
        if(i<=p1.maior_exp) resul->coeficiente[i]+=p1.coeficiente[i];
        if(i<=p2.maior_exp) resul->coeficiente[i]+=p2.coeficiente[i];
    }

}

void subtracao(poly p1, poly p2, poly *resul){
    int e = p1.maior_exp,i;
    if(p2.maior_exp>e) e = p2.maior_exp;
    resul->maior_exp = e;
    resul->coeficiente = (float*)calloc(e+1, sizeof(float));
    for(i=0;i<=e;i++){
        if(i<=p1.maior_exp) resul->coeficiente[i]+=p1.coeficiente[i];
        if(i<=p2.maior_exp) resul->coeficiente[i]-=p2.coeficiente[i];
    }

}

void impressao(poly resul){
    int i;
    float c;
    for(i=resul.maior_exp;i>=0;i--){
        c = resul.coeficiente[i];
        if(c!=0.0){
            
            if(c>0.0) {
                if(i==0) printf("+%.2f", c);
                else printf("+%.2fX^%d", c, i);
            }
            else {
                if(i==0) printf("%.2f", c);
                else printf("%.2fX^%d", c, i);
            }
        }
    }
    printf("\n");
}

int main(){
    int casos, n;
    char op;
    poly p1,p2, resul;

    scanf("%d", &casos);

    while(casos--){
        scanf("%*c%c", &op);
        scanf("%d", &n);
        leitura(&p1, n);
        scanf("%d", &n);
        leitura(&p2, n);

        if(op=='+') soma(p1,p2,&resul);
        if(op=='-') subtracao(p1,p2,&resul);

        impressao(resul);
        free(p1.coeficiente), free(p2.coeficiente), free(resul.coeficiente);
    }
    return 0;
}