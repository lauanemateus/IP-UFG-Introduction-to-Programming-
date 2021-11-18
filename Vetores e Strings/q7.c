#include<stdio.h>
 
int qtd(char s[]){
    int i = 0;
    while(s[i] != '\0') i++;
    return i;
}
 
int solve(char s[]){
    int j,wrong;
    char one[4] = {"one"}, two[4] = {"two"}, three[6] = {"three"};
    int x = qtd(s);
    if(x==3){
        wrong=0;
        for(j=0;j<3;j++){
            if(one[j] != s[j]) wrong++;
        }
        if(wrong==1) return 1;
 
        wrong=0;
        for(j=0;j<3;j++){
            if(two[j] != s[j]) wrong++;
        }
        if(wrong==1) return 2;
    }
    else{
        wrong=0;
        for(j=0;j<5;j++){
            if(three[j] != s[j]) wrong++;
        }
        if(wrong==1) return 3;
    }
}
 
int main(){
    int n,i,j;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        char s[6];
        scanf("%s", s);
        int x = qtd(s);
        printf("%d\n", solve(s));
    }
    return 0;
}