#include<stdio.h>

void print_bytes(void * end_byte , int n){
    int i;
    unsigned char * p = (unsigned char * ) end_byte;
    for(i=0;i<n;i++){
        printf("%d,", (int) *p );
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