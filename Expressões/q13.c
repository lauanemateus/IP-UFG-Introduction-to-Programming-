#include<stdio.h>
#include<math.h>
 
int main(){
    double x1,y1, x2,y2;
    scanf("%lf%lf%lf%lf", &x1,&y1,&x2,&y2);
    double dist = sqrt(pow(x2-x1, 2)+pow((y2-y1),2));
    printf("A DISTANCIA ENTRE A e B = %.2lf\n", dist);
    return 0;
}