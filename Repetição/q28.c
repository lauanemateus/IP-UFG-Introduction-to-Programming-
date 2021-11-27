#include<stdio.h>

int main(){
    double sal,lim, p1,p2;
    double  n1,n2, SalBruto, SalLiq, x;
    int mat;
    scanf("%lf %lf %lf %lf", &sal, &lim, &p1, &p2);

    while( scanf("%d %lf %lf", &mat,&n1,&n2), mat || n1 || n2){  
        SalBruto = sal;
        if(n1 >= 10) SalBruto += 0.14*n1*p1;
        if(n1<10) SalBruto += 0.13*n1*p1;
        if(n2>=20) SalBruto += 0.13*n2*p2;
        if(n2<20) SalBruto += 0.12*n2*p2;
        SalLiq = SalBruto*0.92;
        if(SalBruto > lim){
            SalLiq = SalLiq - (SalLiq-lim)*0.15;
        }
        printf("MATRICULA = %d, SALARIO BRUTO = %.2lf, SALARIO LIQUIDO = %.2lf\n", mat, SalBruto, SalLiq );
    }
    return 0;
}