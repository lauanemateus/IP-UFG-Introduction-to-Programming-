#include<stdio.h>

int _abs(int x){
    if(x<0) return -x;
    else return x;
}

int _pow(int x,int y){
    int num = x, i;
    for( i=1;i<y;i++){ 
        num = num*x;
    }
    return num;
}

int solve(int n,int p){
    int ans = -1, pos = -1, i = 1;
    while(1){
        int pot = _pow(i,p);
        // n pot ans abs(n-ans) tem que ser a menor possivel, ou seja, se abs(n-pot) > abs(n-ans) break;
        if(_abs(n-pot) < _abs(n-ans)){
            ans = pot;
            pos = i;
        }
        else break;
        i++;
    }
    printf("%d -> %d^%d = %d\n" , n, pos ,p, ans);
    return 0;
}

int main(){
    int n,p;
    scanf("%d %d", &n,&p);
    solve(n,p);
    return 0;
}
