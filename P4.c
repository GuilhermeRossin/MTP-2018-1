//Nome: Guilherme Rossin Gervasio dos Santos
//Matricula: 11721EBI017

#include <stdio.h>
int main()
{
	int i, x=1, num = 0;
	char msg[256];
	printf("Digite a mensagem: ");
	scanf("%s", msg);
	getchar();
	for(i=0; msg[i] != '\0'; i++){
		if(msg[i] == '0')
			num = 0 + num*10;
		if(msg[i] == '1')
			num = 1 + num*10;
		if(msg[i] == '2')
			num = 2 + num*10;
		if(msg[i] == '3')
			num = 3 + num*10;
		if(msg[i] == '4')
			num = 4 + num*10;
		if(msg[i] == '5')
			num = 5 + num*10;
		if(msg[i] == '6')
			num = 6 + num*10;
		if(msg[i] == '7')
			num = 7 + num*10;
		if(msg[i] == '8')
			num = 8 + num*10;
		if(msg[i] == '9')
			num = 9 + num*10;
	}
	printf("%d", num);
	return 0;
}
