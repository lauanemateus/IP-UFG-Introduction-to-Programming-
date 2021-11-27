#include<stdio.h>
#include<math.h>

int main(){
    int n,i,j, ord = 1;
    while(scanf("%d", &n), n){
        double a, b;
        for(i=0;i<n;i++){
            scanf("%lf", &a);
            printf("%.2lf ", a);
            if(i==0) {b = a; continue;}
            if(b>a){
                ord = 0;
                printf("b = %lf e a = %lf e n = %d\n", b, a, n);
            }
            b = a;
        }
        if(ord) printf("\nORDENADA\n");
        else printf("\nDESORDENADA\n");
        ord = 1;
    }
    return 0;
}