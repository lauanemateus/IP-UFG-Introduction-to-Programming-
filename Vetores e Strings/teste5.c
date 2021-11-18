#include<stdio.h>

void change_matrix(int v[][2]){
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            v[i][j] = 1;
        }
    }
}

void change_string(char s[]){
    s[0] = 'a';
    s[1] = 'b';
    s[2] = 'c';
}

int main(){
    int v[3][2] = {{0,0},{0,0},{0,0}};
    char s[4] = {"hey"};

    change_matrix(v); 
    change_string(s);

    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%d ", v[i][j]);
        }
        printf("\n");
    }

    printf("%s", s);
    
}