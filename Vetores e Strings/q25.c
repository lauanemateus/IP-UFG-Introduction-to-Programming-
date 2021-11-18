#include<stdio.h>
 
void inicia(int *qtd, int*maiores){
    int i;
    for(i=0;i<123;i++){
        qtd[i] = 0;
    }
    for(i=0;i<26;i++){
        maiores[i] = 0;
    }
}
 
void swap(int v[], int i, int j){
    int x = v[i];
    v[i] = v[j];
    v[j] = x;
}
 
int main(){
    int n,i,j,w,ind,menor, qtd[123], maiores[26], maior = -1;
    char s[401];
    scanf("%d%*c", &n);
    while(n--){
        inicia(qtd, maiores);
        scanf("%[^\n]%*c", s);
        int j=0;
        while(s[j] != '\0'){
            if(s[j] >= 'A' && s[j]<='Z'){
                s[j] += 32;
            }
            if(s[j]>='a' && s[j]<='z'){
                qtd[s[j]] ++;
            }
            j++;
        }
        maior = -1;
        for(i='a'; i<='z'; i++){
            if(qtd[i]>maior){
                maior = qtd[i]; 
            }
        }
        j = 0;
        for(i='a'; i<='z'; i++){
            if(qtd[i]==maior){
                maiores[j] = i;
                j++;
            }
        }
        if(j==2){
            for(i=0;i<j;i++){
            }
        }
        for(i=0;i<j;i++){
            menor = 200;
            ind = i;
            for(w=i;w<j;w++){
                if(menor>maiores[w]){
                    ind = w;
                    menor = maiores[w];
                }
            }
            swap(maiores, ind, i);
        }
 
        for(i=0;i<j;i++){
            printf("%c", (char)maiores[i]);
        }
        printf("\n");
    }
    return 0;
}