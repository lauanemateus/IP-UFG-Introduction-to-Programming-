#include<stdio.h>

double Abs(double x){
    if(x<0) return -x;
    return x;
}

int main(){
    double maior,n, A[3], B[3], dif;
    int i;
    scanf("%lf", &n);
    scanf("%lf %lf %lf", &A[0], &A[1], &A[2]);
    n-=1;
    while(n--){
        scanf("%lf %lf %lf", &B[0], &B[1], &B[2]);
        maior = -1;
        for(i=0;i<3;i++){
            dif = Abs(A[i]-B[i]);
            if(dif > maior) maior = dif;
        }
        printf("%.2lf\n", maior);
        for(i=0;i<3;i++) A[i] = B[i];
    }
    return 0;
}