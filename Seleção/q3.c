#include<stdio.h>

int main(){
    int conta;
    float v;
    char c;
    scanf("%d %f %c", &conta, &v, &c);
    // scanf("%d %f %c", &mat, &cons, &tipo);
    printf("CONTA = %d\n", conta);
    if(c=='I'){
        float aux = v-100;
        if(v<100) aux=0;
        printf("VALOR DA CONTA = %.2f\n", 800.0+aux*0.04);
    }
    else if(c=='C'){
        float aux = v-80;
        if(v<80) aux=0;
        v = 500.0+(0.25*aux);
        printf("VALOR DA CONTA = %.2f\n", v);
    }
    else printf("VALOR DA CONTA = %.2f\n", 5.0+v*0.05);
    return 0;
}

/*
#include<stdio.h>

int main(){
     
    
    return 0;
}
*/