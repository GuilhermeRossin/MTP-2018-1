//Nome: Guilherme Rossin Gervasio dos Santos
//Matrícula: 11721EBI017
#include <stdio.h>
int main()
{
	int opcao, i, cont, v_num[64], *ps, num;
	char msg[256], *pc;
	do{
	printf("\n\n1 - Codificar\n2 - Decodificar\n3 - Sair\nDigite uma opcao: ");
	scanf("%d", &opcao);
	getchar();
	switch(opcao)
	{
		case 1: 
			for(i=0; i<256; i++)
				msg[i] = '\0';
			printf("\nDigite a mensagem: ");
			fgets(msg, 256, stdin);
			for(cont=0; msg[cont] != '\0'; cont++);
			ps = (int*)msg;
			printf("\nMensagem codificada:");
			for(i=0; i<cont; i++){
				if(*(ps+i) != 0)
					printf("%i ", *(ps+i));
			}
			break;
		case 2:	
			printf("\nObs: Digite 0 ao final da sequencia.");
			pc = (char*)v_num;
			i=0; 
			printf("\nDigite a sequencia numerica:");
			do{
				scanf("%d", &num);
				getchar();
				v_num[i] = num;
				i++;
			}while(num != 0);
			pc = (char*)&v_num;
			printf("\nFrase decodificada:");
			for(i=0; i<sizeof(v_num) && *(pc+i)!=0; i++)
				printf("%c", *(pc+i));	
			break;
		case 3:
			return 0;
		default: 
			break;
	}	
	}while(opcao != 4);
	return 0;
}





























