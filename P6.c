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
	int i, num[20], soma;
	float cont ;
	for(i=0; i<20; i++){
		num[i] = 0;}
	for(i=0; i<20; i++){
		printf("\nDigite o %d numero: ", i+1);
		scanf("%d", &num[i]);
		getchar();
		if(num[i] != 0) cont++;}
	soma = (soma_vet(num, i));
	printf("\nMedia - %f", media(soma, cont));
	return 0;}