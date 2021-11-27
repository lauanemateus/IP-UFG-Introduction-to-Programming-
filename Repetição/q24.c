#include<stdio.h>

int main(){
    int a,b,c, div=2, mmc=1;
    scanf("%d %d %d", &a,&b,&c);
    while(a!=1 || b!=1 || c!=1){
        if(a%div==0 || b%div==0 || c%div==0){
            printf("%d %d %d :%d\n", a,b,c, div);
            if(a%div==0) a = a/div;
            if(b%div==0) b = b/div;
            if(c%div==0) c = c/div;
            mmc = mmc*div;

        }
        else{
            while(a%div!=0 && b%div!=0 && c%div!=0) div++;
        }
    }
    printf("MMC: %d\n", mmc);
    return 0;
}