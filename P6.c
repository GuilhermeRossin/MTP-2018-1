//Nome: Guilherme Rossin Gervasio dos Santos
//Matrícula 11721EBI017

#include <stdio.h>
float media(int soma, float cont){
	float resul;
	resul = soma/cont;
	return resul;
}
int soma_vet(int v[20], int n) {
   if (n == 0) return 0;
   else {
      int s;
      s = soma_vet (v, n-1);
      if (v[n-1] > 0) s += v[n-1];
      return (s);}}
int main(){
	int i, num[20], soma, tam;
	float cont ;
	for(i=0; i<20; i++){
		num[i] = 0;}
	printf("\nDigite o numero de termos: ");
	scanf("%d", &tam);
	for(i=0; i<tam; i++){
		printf("\nDigite o %d numero: ", i+1);
		scanf("%d", &num[i]);
		getchar();
		if(num[i] != 0) cont++;}
	soma = (soma_vet(num, tam));
	printf("\nMedia - %f", media(soma, cont));
	return 0;}
