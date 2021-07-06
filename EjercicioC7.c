/*Realizar una funcion que permita convertir un numero entero en una cadena de caracteres*/
#include <stdio.h>

int main()
{
	int num;
	char tex[20];
	printf("Ingresa un numero: ");
	scanf("%d", &num);
	sprintf(tex, "%d", num);
	printf("\nEl numero es: %s", tex);
	return 0;
}
