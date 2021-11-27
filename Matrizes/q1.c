#include<stdio.h>
 
int main(){
    int i,j;
    double m[2][2],resp;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++)
            scanf("%lf", &m[i][j]);
    }
    resp = m[0][0]*m[1][1] - m[0][1]*m[1][0];
    printf("%.2lf\n", resp);
    return 0;
}