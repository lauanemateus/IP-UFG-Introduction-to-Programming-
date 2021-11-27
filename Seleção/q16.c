#include<stdio.h>

int main(){
    int mat, n;
    float sal_min, sal, taxa;
    scanf("%d %f %d %f %f", &mat, &sal_min, &n, &sal, &taxa);
    float bruto, liq, resul;
    if(sal>12*sal_min){
        bruto = sal*0.2;
    }
    else if(sal>5*sal_min){
        bruto = sal*0.08;
    }
    else bruto = 0;
    liq = bruto - 300*n;
    resul = liq - (sal*taxa/100);
   // printf("estou aqui\n");
    printf("MATRICULA = %d\nIMPOSTO BRUTO = %.2f\nIMPOSTO LIQUIDO = %.2f\nRESULTADO = %.2f\n", mat, bruto, liq, resul);
    if(resul<0) printf("IMPOSTO A RECEBER\n");
    else printf("IMPOSTO A PAGAR\n");
    return 0;
}