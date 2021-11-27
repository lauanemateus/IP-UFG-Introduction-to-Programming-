#include<stdio.h>

int main(){
    int m,n,s,i,j;
    int menor,l,c;

    scanf("%d %d %d", &m,&n,&s);

    menor = m;
    if(n<menor) menor = n;

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i <= j+s && i>=j-s){
                printf("(%2d,%2d)", i+1,j+1);
            }
            else printf(".......");
        }
        printf("\n");
    }
    return 0;
}