#include<stdio.h>

#define MAX 50001
#define INF 1000000

void solve(int v[], int n){
    int i,j,menor,ind;
    for(i=0;i<n;i++){
        menor = INF;
        for(j=i;j<n;j++){
            if(v[j] < menor){
                menor = v[j];
                ind = j;
            }
        }
        v[ind] = v[i];
        v[i] = menor;
    }
}

int main(){
    int i,j,q1,q2,v1[MAX],v2[MAX], v3[2*MAX];
    scanf("%d %d", &q1,&q2);
    for(i=0;i<q1;i++){
        scanf("%d", &v1[i]);
        v3[i] = v1[i]; 
    }
    for(i=0;i<q2;i++){
        scanf("%d", &v2[i]);
        v3[q1+i] = v2[i];
    }

    solve(v3,q1+q2);

    printf("\n");
    for(i=0;i<q1+q2;i++){
        printf("%d\n", v3[i]);
    }
    return 0;
}