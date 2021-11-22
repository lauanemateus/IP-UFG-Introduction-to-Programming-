#include<stdio.h>


int main(){
	int x;
	scanf("%d", &x);
	int y[x];
	if(x>=0 && x<=255){
		int i=0;
		while(1235){
			y[i]= x%2;
			x = x/2;
			if(x == 0) {
				break;
			}
			i++;
		}
		if(i+1<8){
				int aux = 8-(i+1);
				while(aux--){
					printf("%d", 0);
				}
			}
		while(i>=0){
			printf("%d", y[i]);
			i--;
		}
		printf("\n");
	}
	else printf("Numero invalido!\n");
	return 0;
}