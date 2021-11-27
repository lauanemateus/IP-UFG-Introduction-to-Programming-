#include<stdio.h>

void solve(double n){
    int num,den,j;
    double i;
    for(i=1.0; ; i = i*10){
        if(n*i == (int)(n*i)){
            num = n*i;
            den = i;
            break;
        }
    }
    for(j=2; j<=num || j<=den ; j++){
        if(num%j==0 && den%j==0) num /= j, den /= j;
    }
    printf("%d/%d\n", num,den);
}

int main(){
    double n;
    scanf("%lf", &n);
    solve(n);
    return 0;
}