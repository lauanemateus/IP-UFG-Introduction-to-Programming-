#include<stdio.h>
#include<math.h>

#define MAX 2005

int main(){
    char s[MAX], vog[11] = "aeiou";
    int i=0, ini=-1, j, fa[5] = {}, fb[5] = {};
    double dist=0;
    scanf("%[^\n]%*c", s);
    for(i=0;s[i]!='\0';i++){
        if(s[i] == ';'){
            ini = i+1;
            break;
        }
    }
    if(ini==-1){
        printf("FORMATO INVALIDO!\n");
        return 0;
    }
    for(j=0;j<5;j++){
        for(i=0;i<ini;i++){
            if(s[i]==vog[j] || s[i]==vog[j]-32){
                fa[j]++;
            }
        }
        for(i=ini;s[i]!='\0';i++){
            if(s[i]==vog[j] || s[i]==vog[j]-32){
                fb[j]++;
            }
        }
    }
    for(i=0;i<=4;i++){
        dist += (fa[i]-fb[i])*(fa[i]-fb[i]);
    }
    dist = sqrt(dist);
    for(i=0;i<5;i++){
        if(i==0) printf("(%d,", fa[i]);
        else if(i!=4) printf("%d,", fa[i]);
        else printf("%d)\n", fa[i]);
    }
    for(i=0;i<5;i++){
        if(i==0) printf("(%d,", fb[i]);
        else if(i!=4) printf("%d,", fb[i]);
        else printf("%d)\n", fb[i]);
    }
    printf("%.2lf\n", dist);

    return 0;
}