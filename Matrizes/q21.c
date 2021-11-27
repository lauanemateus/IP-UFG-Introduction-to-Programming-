#include<stdio.h>

int main(){
    int n, i, v[100], resp=0;;
    int dist[6][6] = {
        {0, 63, 210, 190, -1, 190},
        {63, 0, 160, 150, 95, 10},
        {210, 160, 0, 10, 1, 10},
        {190, 150,10, 0,10, 20},
        {10, 95, 7, 21, 0, 80}, 
        {190, 2, -1, 41, 80,0} };
    
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &v[i]);
    }

    for(i=0;i<n-1;i++){
        if(dist[v[i]][v[i+1]] == -1){
            printf("rota invalida!\n");
            return 0;
        }
        resp += dist[v[i]][v[i+1]];
    }
    printf("%d\n", resp);
    return 0;
}