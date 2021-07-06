/*Realizar un programa que ingrese 10 valores enteros, el programa debe devolver
 cuantas veces se ingresaron valores sucesivos.*/
#include<stdio.h> /*Con este fichero alcanza*/
int main()
{
  int l[10]; /*Arreglo que contendra los 10 elementos*/
  int i, n, m; /*marcadores y contadores*/
  for (i = 0; i < 10; i++) { /*Se leen los numeros y se depositan en l*/
    printf("\nIngrese el numero %i:",i+1);
    scanf("%i",&l[i] );
  }
  printf("\nConjuntos de numeros sucesivos: "); /*Se verifican los sucesivos*/
  n = 0;
  for (i = 0; i < 9; i++) {
    m = l[i + 1] - l[i]; /*Esta resta debe dar uno para que sean sucesivos*/
    if (m == 1) {
      n = n+1; /*Contador*/
      printf("(%d y %d) ; ",l[i],l[i+1] );
    }
  }
  printf("\n\nEl total de pares de numeros sucesivos es: %d\n",n);
return 0;
}
