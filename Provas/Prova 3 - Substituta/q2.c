#include<stdio.h>

#define MAX_WORDS 500
#define MAX_WORD_LEN 500

/**
 * @brief função que compara duas string e valida se são iguais
 * 
 * @param ind1 indica a posição da primeira string na matriz
 * @param ind2 indica a posição da segunda string na matriz
 * @param m matriz onde estão armazenadas as strings
 * @return 1 caso sejam iguais ou 0, caso contrário
 */
int eh_igual(int ind1,int ind2, char m[][MAX_WORD_LEN]);

/**
 * @brief função que indica se o caracter analizado é um separador
 * 
 * @param c caracter analizado 
 * @param sep string de separadores
 * @return 1 caso o caracter analizado seja um separador ou 0 caso contário
 */
int eh_sep(char c, char * sep);

/**
* @brief Função de separação de palavras de acordo com a uma lista de separadores.
* Exemplo de chamada da função:
* str_split("Ola mundo! 1,23", m, ", .!?");
 *
* O resultado é a separação das strings "Ola", "mundo", "1", "23", cada uma
* ocupando uma linha da matriz m, com base nos caracteres de pontuação fornecidos.
*
* @param str ponteiro para o início da string original
* @param m matriz de caracteres, sendo cada linha uma palavra da string original
* @param sep string com a lista de caracteres separadores
* @return int quantidade de palavras detectadas
*/
int str_split(char * str, char m[][MAX_WORD_LEN], char * sep);

int main(){
    char str[MAX_WORD_LEN], m[MAX_WORDS][MAX_WORD_LEN], sep[MAX_WORDS*MAX_WORD_LEN];
    scanf("%[^\n]%*c%[^\n]", str, sep);
    str_split(str,m,sep);
    return 0;
}

int eh_sep(char c, char * sep){
    int j;
    for(j=0;sep[j]!='\0';j++){
        if(c==sep[j]) return 1;
    }
    return 0;
}

int eh_igual(int ind1,int ind2, char m[][MAX_WORD_LEN]){
    int qtd=0,i,j;
    for(i=0;m[ind1][i]!='\0' && m[ind2][i]!='\0';i++){
        if(m[ind1][i]!=m[ind2][i]) return 0;
    }
    if(m[ind1][i]!='\0' || m[ind2][i]!='\0') return 0;
    return 1;
}

int str_split(char * str, char m[][MAX_WORD_LEN], char * sep){
    int cont=0, tam=0,i,j,qtd=0,maior=-1;
    int size[MAX_WORDS];
    for(i=0;str[i]!='\0';i++){
        if(eh_sep(str[i], sep) == 0){
            if(tam==0) {
                cont++;
            }
            m[cont][tam] = str[i];
            tam++;
        }
        else{
            if(tam!=0){
                size[cont] = tam;
                m[cont][tam] = '\0';
            }
            if(maior<tam) maior = tam;
            tam = 0;
        }
    }

    if(tam!=0) {
        size[cont] = tam;
        m[cont][tam] = '\0';
        if(maior<tam) maior = tam;
    }


    for(i=1;i<=cont;i++){
        if(size[i] == maior) qtd++;
        printf("(%d)%s\n", size[i],m[i]);
    }
    printf("%d\n", qtd);
    return qtd;
}