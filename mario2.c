#include <stdio.h>

int main(void)
{
	int n;
	do
	{
		printf ("Blocks? ");//seria o "get_int"
		scanf("%i", &n);//scaneia do teclado
	}
	while (n < 1);//só vai executar o codigo de baixo caso o valor dado pelo usuário for 1 ou maior que 1

	for (int i = 0; i < n; i++)
	{

		{
			for (int j = 0; j < n; j++)
			printf ("#");
		}
		printf ("\n");
	}
}
