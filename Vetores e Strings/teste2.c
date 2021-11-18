#include<stdio.h>

int main(){
    char x;
    for(int i=0;i<5;i++){
        scanf("%c%*c", &x);
        printf("%c ", x);
    }
    return 0;
}
