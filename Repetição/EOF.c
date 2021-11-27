#include <stdio.h>

int main() {
	
	int n;

	while(1) {
		if( scanf("%d", &n) == EOF ) {
			printf("Fim do arquivo\n");
			break;
		}
		printf("valor: %d\n", n);
	}
	
	return 0;
}