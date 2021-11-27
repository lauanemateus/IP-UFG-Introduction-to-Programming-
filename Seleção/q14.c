#include<stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    int dia, mes, ano;
    dia = x/1000000;
    x=x%1000000;
    mes = x/10000;
    x=x%10000;
    ano = x;
    //printf("%d %d %d\n", dia, mes, ano);
    if((mes==4 || mes==6 || mes==9 || mes==11) && dia>30)
        printf("Data invalida!\n");
    else if((mes==2 && dia>28) || ((mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12) && dia>31))
        printf("Data invalida!\n");
    else if(dia==0 || mes==0 || ano==0)
        printf("Data invalida!\n");
    else{
       // if(dia<=9) printf("%d", 0);
        printf("%d de ", dia);
        if(mes==1) printf("janeiro");
        if(mes==2) printf("fevereiro");
        if(mes==3) printf("março");
        if(mes==4) printf("abril");
        if(mes==5) printf("maio");
        if(mes==6) printf("junho");
        if(mes==7) printf("julho");
        if(mes==8) printf("agosto");
        if(mes==9) printf("setembro");
        if(mes==10) printf("outubro");
        if(mes==11) printf("novembro");
        if(mes==12) printf("dezembro");
        printf(" de ");
       /*  if(ano<10) printf("%d%d%d", 0,0,0);
        else if(ano<100) printf("%d%d", 0,0);
        else if(ano<1000) printf("%d", 0); */
        printf("%d\n", ano);
    }
    return 0;
}