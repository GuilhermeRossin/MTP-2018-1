//Nome: Guilherme Rossin Gervasio dos Santos
//Matricula: 11721EBI017

#include <stdio.h>
#include <stdlib.h>
void gera_numeros(float * vetor, int tam) {
	int i; 
	float num; 
	for(i = 0; i < tam; i++) 
		vetor[i] = (float) rand()/(float) RAND_MAX + 0.5f;}
float soma_vet(float v[], int n){
	 if (n == 0) return 0;
   else {
      float s;
      s = soma_vet (v, n-1);
      if (v[n-1] > 0) s += v[n-1];
      return (s);}}
float produto(float v[], int n){
	float mult = 1.0f;
	for(int i=0; i<n; i++)
		mult = mult*v[i];
	return mult;}

int main(){
	srand(123456);
	//printf("%d\n", rand()); 
	int opcao, n=100, soma;
	float num[100];
	gera_numeros(num, n);
	do{
	printf("\nDigite: \n1 - Somatorio.\n2 - Produto.\n3 - Sair do prgrama.");
	printf("\nDigite a opcao: ");
	scanf("%d", &opcao);	
	getchar();
	switch(opcao){
		case 1:
			printf("\nSomatorio: %f", soma_vet(num, n));
			break;
		case 2:
			printf("\nProduto: %f", produto(num,n));
			break;
		case 3:
			return 0;
		default:
			break;
	}}while(opcao != 4);
	return 0;}