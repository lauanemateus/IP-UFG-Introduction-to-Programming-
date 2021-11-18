#include<stdio.h>
#include<stdlib.h>

int main(){
    for(int i=0;i<5;i++){
        printf("%lf\n", (rand()*2.0/(double)RAND_MAX));
    }
    return 0;
}