#include<stdio.h>
#include<math.h>

int main(){
    int a,i,j;
    float b,c;
    char enter;
    while(scanf("%d %f %f", &a,&b,&c) , a){
        enter = getchar();
        printf("%d %.2f\n", a, b*c);
    }
    return 0;
}