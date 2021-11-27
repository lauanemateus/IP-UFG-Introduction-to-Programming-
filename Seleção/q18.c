#include<stdio.h>
#include<math.h>

int main(){
    int x,y,z;
    scanf("%d %d %d", &x, &y, &z);
    int a,b,c,i;
    a = fmin(x,y);
    a = fmin(a,z);
    c = fmax(x,y);
    c = fmax(c,z);
    //printf("\nc = %d\n", c);
    if((a==x && c==z) || (a==z && c==x)) b=y;
    if((a==x && c==y) || (a==y && c==x)) b=z;
    if((a==y && c==z) || (a==z && c==y)) b=x;
    // printf("a = %d, b = %d, c = %d\n", a, b,c);
    for(i=0;i<3;i++){
        char C;
        scanf(" %c", &C);
        switch(C){
            case 'A': printf("%d", a);
            break;

            case 'B': printf("%d", b);
            break;

            case 'C': printf("%d", c);
            break;
        }
        if(i!=2) printf(" ");
        else printf("\n");
    }
    return 0;
}