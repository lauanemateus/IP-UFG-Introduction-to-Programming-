#include<stdio.h>

int main(){
    int i,j,n,m, grid[10][10] = {},ini[4],fim[4],ind,k[4];

    scanf("%d %d", &n,&m);
    if(n>10 || m>10 || n<=0 ||m<=0){
        printf("Dimensao invalida\n");
        return 0;
    }

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
           scanf("%d", &grid[i][j]);
        }
    }

    ini[0]=0, fim[0]=m-1,k[0]=0;
    ini[1]=1, fim[1]=n-1,k[1]=m-1;
    ini[2]=0, fim[2]=m-2,k[2]=n-1;
    ini[3]=1, fim[3]=n-2,k[3]=0;

    ind=0;
    while(ini[ind]<=fim[ind]){
        if(ind==0){
            for(i=ini[ind];i<=fim[ind];i++){
                if(i==0) printf("%d", grid[k[ind]][i]);
                else printf(" %d", grid[k[ind]][i]);
            }
            ini[ind]++, fim[ind]--, k[ind]++;
        }
        if(ind==1){
            for(i=ini[ind];i<=fim[ind];i++){
                printf(" %d", grid[i][k[ind]]);
            }
            ini[ind]++, fim[ind]--, k[ind]--;
        }
        if(ind==2){
            for(i=fim[ind];i>=ini[ind];i--){
                printf(" %d", grid[k[ind]][i]);
            }
            ini[ind]++, fim[ind]--, k[ind]--;
        }
        if(ind==3){
            for(i=fim[ind];i>=ini[ind];i--){
                printf(" %d", grid[i][k[ind]]);
            }
            ini[ind]++, fim[ind]--, k[ind]++;
        }
        ind++;
        if(ind==4) ind=0;
    }
    printf("\n");
    return 0;
}