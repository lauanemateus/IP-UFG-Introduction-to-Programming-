#include<stdio.h>
#include<math.h>
 
int main(){
    int n,i,j;
    scanf("%d", &n);
    for(i = 5; i<=n; i++){
        j=1;
        double x = sqrt(i*i-j*j);
        while(j<=x){
            if( x ==  (int)(x) ){
                printf("hipotenusa = %d, catetos %d e %d\n", i, j , (int)x);
            }
            j++;
            x = sqrt(i*i-j*j);
        }
    }
    return 0;
}