#include <stdio.h>

int main (void)
{
	int n;
	do
	{
		printf ("Width? ");
		char * fgets (n,4,stdin);//stdin significa que vai ler do teclado, e então, vai armazenar no "n"//como consertar essa linha???
	}
	while (n < 1);//só vai executar o codigo de baixo caso o valor dado pelo usuário for 1 ou maior que 1

	for (int i = 0; i < 4; i++)
	{
		printf ("?");
		printf ("/n");
	}
}
