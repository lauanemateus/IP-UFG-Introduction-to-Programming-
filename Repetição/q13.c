#include<stdio.h>
#include<math.h>

int main(){
    int i,n;
    double soma_I=0, soma_P=0, contI=0, contP=0;
    while(scanf("%d", &n), n){
        if(n%2==0) {
            soma_P+=n;
            contP++;
        }
        else {
            soma_I+=n;
            contI++;    
        }
    }
    if(contI==0) contI=1;
    if(contP==0) contP=1;
    printf("MEDIA PAR: %lf\nMEDIA IMPAR: %lf\n", soma_P/contP, soma_I/contI);
    return 0;
}