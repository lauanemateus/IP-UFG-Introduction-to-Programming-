#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Natal{
    char pais[15];
    char trad[25];
};

int eh_igual(char s1[], char s2[]){
    int l1 = strlen(s1), l2 = strlen(s2),i;
    if(l1!=l2) return 0;
    for(i=0;i<l1;i++){
        if(s1[i]!=s2[i]) return 0;
    }
    return 1;
}

void Copy_trads(int ini, int fim, struct Natal * lista, char trads[]){
    int i,j;
    for(j=0,i=ini;i<=fim;i++,j++){
        lista->trad[j] = trads[i];
    }
    lista->trad[j] = '\0';
}

void Copy_paises(int ini, int fim, struct Natal * lista, char trads[]){
    int i,j;
    for(j=0,i=ini;i<=fim;i++,j++){
        lista->pais[j] = trads[i];
    }
    lista->pais[j] = '\0';
}

int main(){
    struct Natal * lista = NULL;
    int i,j=0,cont=0;
    char s[100];
    lista = (struct Natal *)malloc(100*sizeof(struct Natal));
    
    char paises[16*24] = "brasil alemanha austria coreia espanha grecia estados-unidos inglaterra australia portugal suecia turquia argentina chile mexico antardida canada irlanda belgica italia libia siria marrocos japao";
    char trads[26*24] = "Feliz Natal! Frohliche Weihnachten! Frohe Weihnacht! Chuk Sung Tan! Feliz Navidad! Kala Christougena! Merry Christmas! Merry Christmas! Merry Christmas! Feliz Natal! God Jul! Mutlu Noeller! Feliz Navidad! Feliz Navidad! Feliz Navidad! Merry Christmas! Merry Christmas! Nollaig Shona Dhuit! Zalig Kerstfeest! Buon Natale! Buon Natale! Milad Mubarak! Milad Mubarak! Merii Kurisumasu!";

    for(i=0;trads[i]!='\0';i++){
        if(trads[i]=='!'){
            Copy_trads(j,i,&lista[cont], trads);
            cont++;
            j = i+2;
        }
    }

    cont=0,j=0;
    for(i=0;paises[i]!='\0';i++){
        if(paises[i+1]==' ' || paises[i+1] == '\0'){
            Copy_paises(j,i,&lista[cont], paises);
            cont++;
            j = i+2;
        }
    }

    while(scanf("%[^\n]%*c", s) != EOF){
        for(i=0;i<24;i++){
            if(eh_igual(s,lista[i].pais)){
                printf("%s\n", lista[i].trad);
                break;
            }
        }
        if(i!=24) continue;
        printf("-- NOT FOUND --\n");

    } 
    free(lista);
    return 0;
}