#include<stdio.h>

void zera(int v[]){
    int i;
    for(i=0;i<=60;i++){
        v[i] = 0;
    }
}

int main(){
    int v[61] = {}, apo[6],i,t, cont = 0, sena=0, quina=0, quadra=0;
    zera(v);
    for(i=0;i<6;i++){
        scanf("%d", &apo[i]);
        v[apo[i]] = 1;
    }
    scanf("%d", &t);
    while(t--){
        cont = 0;
        for(i=0;i<6;i++){
            scanf("%d", &apo[i]);
            if(v[apo[i]]) cont ++;
        }
        if(cont == 6) sena++;
        if(cont == 5) quina++;
        if(cont == 4) quadra++;
    }
    if(sena==0){
        printf("Nao houve acertador para sena\n");
    }
    else printf("Houve %d acertador(es) da sena\n", sena);

    if(quina==0){
        printf("Nao houve acertador para quina\n");
    }
    else printf("Houve %d acertador(es) da quina\n", quina);

    if(quadra==0){
        printf("Nao houve acertador para quadra\n");
    }
    else printf("Houve %d acertador(es) da quadra\n", quadra);
    return 0;
}