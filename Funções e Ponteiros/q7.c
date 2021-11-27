#include<stdio.h>

void print_bits(unsigned char * _byte){
   // printf("%p ", _byte);
   int i, x = *_byte, peso = 128;
   for(i=0;i<8;i++){
       printf("%d", x/peso);
       x %= peso;
       peso /= 2;
   }
}

void print_bytes(const void *end_byte, int n){
    unsigned char * p = (unsigned char * ) end_byte;
    int i;
    for(i=0;i<n;i++){
        print_bits(p);
        if(i!=n-1) printf(" ");
        printf("%d", (int) *p );
        p++;
    }
    printf("\n");
}

int main(){
    double n;
    scanf("%lf", &n);

    unsigned char uc = n;
    unsigned short us = n;
    unsigned int ui = n;
    float f = n;
    double d =n;

    print_bytes(&uc, sizeof(unsigned char));
    print_bytes(&us, sizeof(unsigned short));
    print_bytes(&ui, sizeof(unsigned int));
    print_bytes(&f, sizeof(float));
    print_bytes(&d, sizeof(double));

    return 0;
}