#include<stdio.h>
#include<math.h>
 
int main(){
    int a,b,i=0, cresA, cresB;
    scanf("%d %d", &a,&b);
    if(a>=b) printf("ANOS = %d\n", 0);
    else{
        for(i=1; ; i++){
            a = a*1.03, b = b*1.015;
            if(a>=b){
                printf("ANOS = %d\n", i);
                break;
            }
        }
    }
    return 0;
}