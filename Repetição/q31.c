#include<stdio.h>
#include<math.h>

double Fat(int n, double fat[]){
    if(fat[n] != 0) return fat[n];
    return fat[n] = n*Fat(n-1, fat);
}

int main(){
    double x,fat[100], cos = 0;
    int n,i;
    for(i=0;i<=100;i++){
        fat[i] = 0;
    }
    fat[0] = 1;
    scanf("%lf %d", &x,&n);
    for(i=0;i<=n;i++){
        if(i%2 == 0) cos += pow(x, 2*i)/Fat(2*i, fat);
        else cos -= pow(x, 2*i)/Fat(2*i, fat);
    }    
    printf("cos(%.2lf) = %lf\n", x, cos);
    return 0;
}