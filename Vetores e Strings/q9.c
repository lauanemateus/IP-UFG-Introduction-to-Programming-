#include<stdio.h>

#define MAXN 10005
#define MAXM 1005

void swap(char *a, char* b){
    char c = *a;
    *a = *b;
    *b = c;
}

int main(){
    int n,i,j,z,meio;
    char s[MAXM];
    scanf("%d%*c", &n);
    for(z=0;z<n;z++){
        scanf("%[^\n]%*c", s);

        for(j=0; s[j] != '\0'; j++){
            if((s[j]>='a' && s[j]<='z') || (s[j]>='A' && s[j]<='Z')){
                s[j]+=3;
            }
        }

        meio = (j/2);
        //printf("\nmeio = %d\n", meio);
        for(i=0, j-=1; i<meio;i++,j--){
            swap(&s[i], &s[j]);
        }
        for(i=meio; s[i] != '\0'; i++){
            s[i] = s[i]-1;
        }
        printf("%s\n", s);
    }
    return 0;
}