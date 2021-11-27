#include<stdio.h>
 
int main(){
    unsigned long int cod;
    float compra, venda;
    float  totcompra=0, totvenda=0, lucro = 0;
    float max_n=0, max_lucro=0;
    int cod_n, cod_lucro;
    int n,i=1,j,a=0,b=0,c=0;
    while(scanf("%lu %f %f %d", &cod, &compra, &venda, &n) != EOF){
        totcompra+=compra*n, totvenda+=venda*n;
        if(max_n<n){
            max_n = n;
            cod_n = cod;
        }
        if(max_lucro<(venda-compra)) {
            cod_lucro = cod;
            max_lucro = venda-compra;
        }
        float perc = 100*(venda-compra)/compra;
        if(perc < 10.0) a++;
        else if(perc<=20.0) b++;
        else if(perc>20.0) c++;
        i++;
    }
    printf("Quantidade de mercadorias que geraram lucro menor que 10%%: %d\n", a);
    printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%% e menor ou igual a 20%%: %d\n", b);
    printf("Quantidade de mercadorias que geraram lucro maior do que 20%%: %d\n", c);
    printf("Codigo da mercadoria que gerou maior lucro: %d\n", cod_lucro);
    printf("Codigo da mercadoria mais vendida: %d\n", cod_n);
    printf("Valor total de compras: %.2f, valor total de vendas: %.2f e percentual de lucro total: %.2f%%\n", totcompra, totvenda, 100*(totvenda-totcompra)/totcompra);
    return 0;
}
