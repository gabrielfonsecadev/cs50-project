#include <stdio.h>

const char meow (int n);//tem que replicar a função aqui em cima, para ser como um protótipo, pois o C lê de cima para baixo

int main (void)//main é a nomeclatura dada a função principal do código
{
	meow(3);//aqui é a função meow que eu criei mais cedo
}


const char meow (int n)//"const char" é utilizado para mais de caractere, é a versão prolongada do char, como o "long int"
{
	for (int i = 0; i < n; i++)//o "n" é a constante que eu selecionei para representar o numero
	printf ("meow\n");
}
