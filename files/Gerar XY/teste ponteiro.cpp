#include <stdio.h>

void teste(int *n){
	printf("%d: local\n", *n);
	*n=*n+1;
	printf("%d: Novo local\nDigite novo n", *n);
	scanf("%d", n);
	printf("%d: Novo local\n", *n);
	*n=*n+1;
}

int main(){
	int n=1;
	printf("%d: main\n", n);
	teste(&n);
	printf("%d: novo main\n", n);
}
