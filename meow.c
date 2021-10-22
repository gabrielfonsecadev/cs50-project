#include <stdio.h>

const char meow (void);//tem que replicar a função aqui em cima, para ser como um protótipo, pois o C lê de cima para baixo

int main (void)//main é a função principal do código

{
	for (int i = 0; i < 3; i++)
	{
		meow();//aqui é a função meow que eu criei mais cedo
	}
}

const char meow (void)//"const char" é utilizado para mais de caractere, é a versão prolongada do char, como o "long int"

{
	printf ("meow\n");
}