#include<stdio.h>
#include<math.h>

double Fat(int n, double fat[]){
    if(fat[n] != 0) return fat[n];
    return fat[n] = n*Fat(n-1, fat);
}

int main(){
    double x,fat[100], ex = 0;
    int n,i;
    for(i=0;i<=100;i++){
        fat[i] = 0;
    }
    fat[0] = 1;
    scanf("%lf %d", &x,&n);
    for(i=0;i<=n;i++){
        ex += pow(x,i)/Fat(i,fat);
    }    
    printf("e^%.2lf = %lf\n", x, ex);
    return 0;
}