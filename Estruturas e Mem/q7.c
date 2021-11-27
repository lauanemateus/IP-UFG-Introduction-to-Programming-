#include<stdio.h>
#include<math.h>

typedef struct {
    double u,x,y,z;
} Ponto;

int main(){
    int n,i;
    double dist;
    Ponto a,b;

    scanf("%d", &n);
    scanf("%lf %lf %lf %lf", &a.u, &a.x, &a.y, &a.z);
    for(i=1;i<n;i++){
        scanf("%lf %lf %lf %lf", &b.u, &b.x, &b.y, &b.z);
        dist = sqrt((a.u-b.u)*(a.u-b.u) + (a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y) + (a.z-b.z)*(a.z-b.z));
        printf("%.2lf\n", dist);
        a = b;
    }
    return 0;
}