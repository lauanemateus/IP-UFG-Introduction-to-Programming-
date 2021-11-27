#include<stdio.h>

int main(){
    int i,j,n, x[6], sort[50000][6],cont,k, sena=0,quina=0,quadra=0;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        for(j=0;j<6;j++){
            scanf("%d", &sort[i][j]);
        }
    }
    for(i=0;i<6;i++) scanf("%d", &x[i]);
    for(i=0;i<n;i++){
        cont=0;
        for(j=0;j<6;j++){
            for(k=0;k<6;k++){
                if(x[k] == sort[i][j]) cont++;
            }
        }
        if(cont==6) sena++; 
        if(cont==5) quina++;
        if(cont==4) quadra++;
    }
    if(sena==0) printf("Nao houve acertador para a sena\n");
    else printf("Houve %d acertador(es) da sena\n", sena);

    if(quina==0) printf("Nao houve acertador para a quina\n");
    else printf("Houve %d acertador(es) da quina\n", quina);

    if(quadra==0) printf("Nao houve acertador para a quadra\n");
    else printf("Houve %d acertador(es) da quadra\n", quadra);
    return 0;
}