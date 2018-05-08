//Nome: Guilherme Rossin Gervasio dos Santos
//Matricula: 11721EBI017

#include <stdio.h>

int main()
{	int opcao, a, b, c = 0, bina[32],binb[32], binc[32], i=0,j;;
	do{
		printf("1 - NOT\n2 - AND\n3 - OR\n4 - XOR\n5 - Right Shift\n6 - Left Shift");
		printf("\n\nDIGITE: ");
		scanf("%d", &opcao);
		getchar();
		switch(opcao)
		{
			case 1:
				printf("Digite um numero inteiro A: ");
				scanf("%d", &a);
				getchar();
				c = ~a;
				printf("NOT %d (", a);
				if(a < 0)
					a = a*(-1);
				while(a>0){
					bina[i] = a % 2;
					i++;
					a = a / 2;
				}
				for(j = i; j<32; j++)
					bina[j] = 0;
				for(j = 31; j>=0; j--){
					if(bina[j] == 1)
						printf("0");
					else
						printf("1");
				}
				printf(")");
				i=0;
				j=0;
				printf(": %d (", c);
				while(c>0){
					binc[i] =  c % 2;
					i++;
					c = c / 2;
				}
				for(j = i; j<32; j++)
					binc[j] = 0;
				for(j = 31; j>=0; j--)
					printf("%d", binc[j]);
					printf(")");	
				return 0;
			case 2:
				printf("Digite um numero inteiro A: ");
				scanf("%d", &a);
				getchar();
				printf("Digite um numero inteiro B: ");
				scanf("%d", &b);
				c = a & b;
				printf("%d (", a);
				while(a>0){
					bina[i] = a % 2;
					i++;
					a = a / 2;
				}
				for(j = i; j<32; j++)
					bina[j] = 0;
				for(j = 31; j>=0; j--)
					printf("%d", bina[j]);
					printf(")");	
				i=0;
				j=0;	
				printf("AND %d (", b);
				while(b>0){
					binb[i] = b % 2;
					i++;
					b = b / 2;
				}
				for(j = i; j<32; j++)
					binb[j] = 0;
				for(j = 31; j>=0; j--)
					printf("%d", binb[j]);
					printf(")");
				i=0;
				j=0;
				printf(": %d (", c);
				while(c>0){
					binc[i] =  c % 2;
					i++;
					c = c / 2;
				}
				for(j = i; j<32; j++)
					binc[j] = 0;
				for(j = 31; j>=0; j--)
					printf("%d", binc[j]);
					printf(")");
				return 0;
			case 3:
				printf("Digite um numero inteiro A: ");
				scanf("%d", &a);
				getchar();
				printf("Digite um numero inteiro B: ");
				scanf("%d", &b);
				c = a | b;
				printf("%d (", a);
				while(a>0){
					bina[i] = a % 2;
					i++;
					a = a / 2;
				}
				for(j = i; j<32; j++)
					bina[j] = 0;
				for(j = 31; j>=0; j--)
					printf("%d", bina[j]);
					printf(")");	
				i=0;
				j=0;	
				printf("OR %d (", b);
				while(b>0){
					binb[i] = b % 2;
					i++;
					b = b / 2;
				}
				for(j = i; j<32; j++)
					binb[j] = 0;
				for(j = 31; j>=0; j--)
					printf("%d", binb[j]);
					printf(")");
				i=0;
				j=0;
				printf(": %d (", c);
				while(c>0){
					binc[i] =  c % 2;
					i++;
					c = c / 2;
				}
				for(j = i; j<32; j++)
					binc[j] = 0;
				for(j = 31; j>=0; j--)
					printf("%d", binc[j]);
					printf(")");
				return 0;
			case 4:
				printf("Digite um numero inteiro A: ");
				scanf("%d", &a);
				getchar();
				printf("Digite um numero inteiro B: ");
				scanf("%d", &b);
				c = a ^ b;
				printf("%d (", a);
				while(a>0){
					bina[i] = a % 2;
					i++;
					a = a / 2;
				}
				for(j = i; j<32; j++)
					bina[j] = 0;
				for(j = 31; j>=0; j--)
					printf("%d", bina[j]);
					printf(")");	
				i=0;
				j=0;	
				printf("XOR %d (", b);
				while(b>0){
					binb[i] = b % 2;
					i++;
					b = b / 2;
				}
				for(j = i; j<32; j++)
					binb[j] = 0;
				for(j = 31; j>=0; j--)
					printf("%d", binb[j]);
					printf(")");
				i=0;
				j=0;
				printf(": %d (", c);
				while(c>0){
					binc[i] =  c % 2;
					i++;
					c = c / 2;
				}
				for(j = i; j<32; j++)
					binc[j] = 0;
				for(j = 31; j>=0; j--)
					printf("%d", binc[j]);
					printf(")");
				return 0;
			case 5:
				printf("Digite um numero inteiro A: ");
				scanf("%d", &a);
				getchar();
				printf("Digite um numero inteiro B: ");
				scanf("%d", &b);
				c = a >> b;
				printf("%d (", a);
				while(a>0){
					bina[i] = a % 2;
					i++;
					a = a / 2;
				}
				for(j = i; j<32; j++)
					bina[j] = 0;
				for(j = 31; j>=0; j--)
					printf("%d", bina[j]);
					printf(")");	
				i=0;
				j=0;	
				printf("Right Shift %d (", b);
				while(b>0){
					binb[i] = b % 2;
					i++;
					b = b / 2;
				}
				for(j = i; j<32; j++)
					binb[j] = 0;
				for(j = 31; j>=0; j--)
					printf("%d", binb[j]);
					printf(")");
				i=0;
				j=0;
				printf(": %d (", c);
				while(c>0){
					binc[i] =  c % 2;
					i++;
					c = c / 2;
				}
				for(j = i; j<32; j++)
					binc[j] = 0;
				for(j = 31; j>=0; j--)
					printf("%d", binc[j]);
					printf(")");
				return 0;
			case 6:
				printf("Digite um numero inteiro A: ");
				scanf("%d", &a);
				getchar();
				printf("Digite um numero inteiro B: ");
				scanf("%d", &b);
				c = a << b;
				printf("%d (", a);
				if(a < 0)
					a = a*(-1);
				while(a>0){
					bina[i] = a % 2;
					i++;
					a = a / 2;
				}
				for(j = i; j<32; j++)
					bina[j] = 0;
				for(j = 31; j>=0; j--){
					if(bina[j] == 1)
						printf("0");
					else
						printf("1");
				}
				printf(")");
				i=0;
				j=0;	
				printf("Left Shift %d (", b);
				while(b>0){
					binb[i] = b % 2;
					i++;
					b = b / 2;
				}
				for(j = i; j<32; j++)
					binb[j] = 0;
				for(j = 31; j>=0; j--)
					printf("%d", binb[j]);
					printf(")");
				i=0;
				j=0;
				printf(": %d (", c);
				while(c>0){
					binc[i] =  c % 2;
					i++;
					c = c / 2;
				}
				for(j = i; j<32; j++)
					binc[j] = 0;
				for(j = 31; j>=0; j--)
					printf("%d", binc[j]);
					printf(")");
				return 0;
		}
	}while(opcao);
	return 0;
}