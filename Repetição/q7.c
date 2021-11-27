#include<stdio.h>

int main(){
    while(1){
        int i;
        double notas[8], listas[5], tf, mp=0, ml=0;
        int p, mat;
        scanf("%d", &mat);
        for(i=0;i<8;i++){
            scanf("%lf", &notas[i]);
            mp+=notas[i];
        }
        for(i=0;i<5;i++){
            scanf("%lf", &listas[i]);
            ml+=listas[i];
        }
        scanf("%lf %d", &tf,&p);
        if(mat==-1) break;
        double nota = (mp*0.7/8.0 + ml*0.15/5.0) + 0.15*tf;
        printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: ", mat, nota);
        if(p<0.75*128.0){
            if(nota<6.0) printf("REPROVADO POR NOTA E POR FREQUENCIA\n");
            else printf("REPROVADO POR FREQUENCIA\n");
        }
        else{
            if(nota<6.0){
                printf("REPROVADO POR NOTA\n");
            }
            else printf("APROVADO\n");
        }
       // printf("freq eh %d\n", p);
    }
    return 0;
}

/*
4448901 2.3 3.2 4.3 5.0 6.5 7.2 7.3 8.4 9.2 8.3 9.5 7.6 10.0 9.0 118
4448902 4.5 8.2 4.4 7.0 7.5 9.2 8.3 9.5 10.0 9.2 8.3 9.5 7.6 10.0 80
4448903 4.1 3.2 4.4 5.0 6.5 6.2 5.5 6.5 8.4 7.2 6.3 9.5 5.6 4.0 110
4448903 4.1 3.2 4.4 5.0 6.5 6.2 5.5 6.5 8.4 7.2 6.3 9.5 5.6 4.0 80
-1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
*/