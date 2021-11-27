#include<stdio.h>
#include<math.h>

/**
2 * Função que classifica uma flor Iris
3 * @param pt tamanho da petala
4 * @param pl largura da petala
5 * @param st tamanho da sepala
6 * @param sl largura da sepala
7 * @param d1 ponteiro para a distancia para a classe setosa
8 * @param d2 ponteiro para a distancia para a classe virginica
9 * @param d3 ponteiro para a distancia para a classe versicolor
10 */
int classifica_iris(double pt, double pl, double st, double sl, double *d1, double *d2, double *d3){
    *d1 = sqrt( (6.85-pt)*(6.85-pt) + (3.07-pl)*(3.07-pl) + (5.74-st)*(5.74-st) + (2.07-sl)*(2.07-sl));
    *d2 = sqrt( (5.00-pt)*(5.00-pt) + (3.41-pl)*(3.41-pl) + (1.46-st)*(1.46-st) + (0.24-sl)*(0.24-sl));
    *d3 = sqrt( (5.90-pt)*(5.90-pt) + (2.74-pl)*(2.74-pl) + (4.39-st)*(4.39-st) + (1.43-sl)*(1.43-sl));
    double menor = *d1;
    int ind =1;
    if(menor > *d2){
        menor = *d2;
        ind = 2;
    }
    if(menor > *d3){
        menor = *d3;
        ind = 3;
    }
    return ind;
}

int main(){
    double pt,pl,st,sl,d1,d2,d3;
    while(scanf("%lf %lf %lf %lf", &pt,&pl,&st,&sl) != EOF){
        int x = classifica_iris(pt,pl,st,sl,&d1,&d2,&d3);
        printf("(%.2lf %.2lf %.2lf)", d1,d2,d3);
        switch(x){
            case 1:
                printf(" setosa\n");
                break;
            case 2:
                printf(" virginica\n");
                break;
            case 3:
                printf(" versicolor\n");
        }  
    }
    return 0;
}