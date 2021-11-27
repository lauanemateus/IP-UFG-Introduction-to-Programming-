#include<stdio.h>

int main(){
    int n,i;
    scanf("%d", &n);
    double v[n];
    for(i=0;i<n;i++){
        scanf("%lf", &v[i]);
        double C = 5.0*(v[i]-32.0)/9;
        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", v[i], C);
    }
    return 0;
}