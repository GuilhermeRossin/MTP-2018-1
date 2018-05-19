//Nome: Guilherme rossin Gervasio dos Santos
//Matrícula: 11721EBI017
#include <stdio.h>
int ackermann(int m, int n){
	if(m == 0) return n+1;
	else if(n == 0) return ackermann(m-1, 1);
	else return ackermann(m-1, ackermann (m, n-1));
}
int main(){
	int m, n;
	printf("\nDigite o parametro m: ");
	scanf("%d", &m);
	getchar();
	printf("\nDigite o parametro n: ");
	scanf("%d", &n);
	getchar();
	printf("\nResulta em: %d", ackermann(m,n));
	return 0;}