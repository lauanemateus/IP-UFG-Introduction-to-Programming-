#include<stdio.h>
 
/**
 * @brief função que atualiza a string str
 * @param str string de entrada
 */
void atualiza(char * str, int i);
 
/**
* Função que remove vogais e calcula a quantidade de vogais removidas
* @param str string de entrada
* @param vogais vetor de 5 posições que contabiliza a quantidade
* de vogais removidas
* @return A função atualiza os vetores str e vogais.
*/
void remove_vogais( char * str, int * vogais );
 
int main(){
    char s[500];
    int vogais[5],i;
    for(i=0;i<5;i++){
        vogais[i]=0;
    }
    scanf("%[^\n]", s);
    remove_vogais(s,vogais);
    printf("%s\n", s);
    for(i=0;i<5;i++){
        if(i==0){
            printf("a: %d\n", vogais[i]);
        }
        if(i==1){
            printf("e: %d\n", vogais[i]);
        }
        if(i==2){
            printf("i: %d\n", vogais[i]);
        }
        if(i==3){
            printf("o: %d\n", vogais[i]);
        }
        if(i==4){
            printf("u: %d\n", vogais[i]);
        }
    }
    return 0;
}
 
void atualiza(char * str, int i){
    for( ; str[i]!='\0'; i++){
        str[i] = str[i+1];
    }
}
 
void remove_vogais(char * str, int *vogais){
    int i;
 
    for(i=0;str[i] != '\0'; ){
        if(str[i]=='a' || str[i]=='A'){
            vogais[0]++;
            atualiza(str, i);
        }
        else if(str[i]=='e' || str[i]=='E'){
            vogais[1]++;
            atualiza(str, i);
        }
        else if(str[i]=='i' || str[i]=='I'){
            vogais[2]++;
            atualiza(str, i);
        }
        else if(str[i]=='o' || str[i]=='O'){
            vogais[3]++;
            atualiza(str, i);
        }
        else if(str[i]=='u' || str[i]=='U'){
            vogais[4]++;
            atualiza(str, i);
        } 
        else i++;
    }
}
