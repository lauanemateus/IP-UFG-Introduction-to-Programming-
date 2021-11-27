#include<stdio.h>
#include<math.h>

struct RaizEqu2{
    float a1,b1,a2,b2;
};

struct Complex{
    float a,b,c;
};

void acha_b_c(float a, float *b, float* delta){
    int i=2, aux=10, cont=0;
    *b = 0;
    *delta = -(*delta);

    /*if(*delta-(int)(*delta)==0){
        for(i=2;i*i<= *delta;i++){
            while((int)(*delta)%(i*i) == 0) {
                *b *= i; 
                *delta /= i*i;
            }
        }
    }
    else{
        while(*delta-(int)(*delta)!=0){
            *delta *= aux;
            aux *= 10;
        }
        aux /= 10;

        for(i=2;i*i<= *delta;i++){
            while((int)(*delta)%(i*i) == 0) {
                cont++;
                *b *= i; 
            }
        }
        cont /= 2;
        cont *= 10;
        *b /= cont;
    }
    *b /= (2*a);
    *c = */ 
    printf("b=%.2f\n", *b);
}

/**
* Função que calula as raízes de uma equação de segundo grau.
*
* @param a coeficiente quadrado
* @param b coeficiente linear
* @param c constante
* @return retorna uma estrutura RaizEqu2 com dois números complexos
*/
struct RaizEqu2 calcula_raiz_equ_2( float a, float b, float c);

/**
* Imprime numeros complexos na saída padrão do sistema. A impressão segue o formato
* a + bi, onde a é a parte real e b a imaginária. Os valores são apresentados
* somente se forem diferente de zero. No caso de a e b forem zero, o valor 0 é
* apresentado. Se o valor de b for 1 ou -1, somente o caracter i ou -i é
apresentado.
*
* @param c Numero complexo a ser impresso.
*/
void complex_print(struct Complex c);

int main(){
    float a,b,c;
    struct Complex A;
    scanf("%f %f %f", &A.a,&A.b,&A.c);
    complex_print(A);
    return 0;
}

struct RaizEqu2 calcula_raiz_equ_2( float a, float b, float c){
    struct RaizEqu2 raizes;
    float delta;
    if(a==0 && b!=0){
        raizes.a1 = -c/b;
        raizes.b1 = 0;
        raizes.a2 = -c/b;
        raizes.b2 = 0;
    }
    else{
        delta = b*b - 4*a*c;
        if(delta>=0){
            raizes.a1 = (-b+sqrt(delta))/(2*a);
            raizes.b1 = 0;
            raizes.a2 = (-b-sqrt(delta))/(2*a);
            raizes.b2 = 0;
        }
        else{
            raizes.a1 = (-b/(2*a));
            raizes.a2 = raizes.a1;
            raizes.b1 = sqrt(-delta)/(2*a);
            raizes.b2 = -sqrt(-delta)/(2*a);
            
        }
    }
    return raizes;
}

void complex_print(struct Complex c){
    struct RaizEqu2 raizes = calcula_raiz_equ_2(c.a,c.b,c.c);
    //printf("a1=%.2f b1=%.2f a2=%.2f b2=%.2f\n",raizes.a1,raizes.b1,raizes.a2,raizes.b2);
    
    if(raizes.a1!=0.0){
        printf("x1 = %.2f", raizes.a1);
        if(raizes.b1==1) printf("+i");
        else if(raizes.b1==-1) printf("-i");
        else if(raizes.b1>0) printf("+%.2fi", raizes.b1);
        else if(raizes.b1<0) printf("%.2fi", raizes.b1);
    }
    else if(raizes.a1==0.0 && raizes.b1!=0.0){
        if(raizes.b1==1) printf("x1 = i");
        else if(raizes.b1==-1) printf("x1 = -i");
        else printf("x1 = %.2fi", raizes.b1);
    }
    else if(raizes.a1==0.0 && raizes.b1==0.0){
        printf("x1=0.00");
    }
    printf("\n");

    if(raizes.a2!=0.0){
        printf("x2 = %.2f",raizes.a2);
        if(raizes.b2==1) printf("+i");
        else if(raizes.b2==-1) printf("-i");
        else if(raizes.b2>0) printf("+%.2fi", raizes.b2);
        else if(raizes.b2<0) printf("%.2fi",raizes.b2);
    }
    else if(raizes.a2==0.0 && raizes.b2!=0.0){
        if(raizes.b2==1) printf("x2 = i");
        else if(raizes.b2==-1) printf("x2 = -i");
        else printf("x2 = %.2fi", raizes.b2);
    }
    else if(raizes.a2==0.0 && raizes.b2==0.0){
        printf("x2=0.00");
    }
    printf("\n");
    
}