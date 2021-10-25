#include <stdio.h>
#include <math.h>

float main ()

{
	float x, y, soma, subtracao, multi, div;

	printf ("Numeros X e Y: ");
	scanf ("%f%f", &x, &y);

	soma = x + y;
	subtracao = x - y;
    multi = x * y;
    div = x / y;

	printf ("A soma e: %.2f\n", soma);
	printf( "A subtracao e: %.2f\n", subtracao);
    printf( "A multiplicacao e: %.2f\n", multi);
    printf( "A divisao e: %.2f\n", div);
}