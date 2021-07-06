/*Escribir un programa que lea un entero entre [0, 255] y el numero de bist de
desplazamiento(n). El programa debera mostrar la suma de:
a.- El numero desplazado n veces hacia la izquierda sumado con los bits que
fueron desplazados a la derecha
b.- El numero desplazoado n veces hacia la derecha sumado con los bits que
fueron desplazados a la izquierda*/
#include<stdio.h>
#include<math.h> /*fichero para usar pw y (double)*/
int main()
{
  unsigned char num; /*Este tipo de variables van de 0 a 155*/
  int n;
  printf("Introduzca un numero de 0 a 255: ");
  scanf("%d",&num);
  printf("Introduzca un numero de desplazamientods de 0 a 7: ");
  scanf("%d",&n );
  /*Se leyeron tanto el numero como la cantidad de desplazamientos y a
  continuacion se pasa el numero que se brindo a binario*/
  int bin[8];
  int i;
  for (i = 0; i < 8; i++) {
    bin[7-i] = num % 2;
    num = num / 2;
  }
  int size;
  /*Ahora se averigua el tamaño de ese numero binario*/
 for (i = 0; i < 7; i++) {
   if (bin[i] == 1) {
     size = 8-i;
     break;
   }
 }
 /*Y se le sacan los ceros que esten de mas y se muestra*/
  int Bin[size];
  for (i = 0; i < size; i++) {
    Bin[i] = bin[8-size+i];
  }
  printf("\nEl numero en codigo binario es: ");
  for (i = 0; i < size; i++) {
   printf("%i",Bin[i] );
  }
  /*Ahora se separara primero de izquierda a derecha este numero binario*/
int bin1[size - n];
int bin2[n];
printf("\n\nQue desplazado a la izquierda %i",n );
printf(" veces es: ");
/*Primer numero*/
for ( i = 0; i < size - n; i++) {
  bin1[i] = Bin[i];
  printf("%i",bin1[i]);
}
printf(" y: ");
/*Segundo numero*/
for ( i = 0; i < n ; i++) {
  bin2[i] = Bin[i + size - n];
  printf("%i",bin2[i] );
}
/*Ahora se transforma estos a decimal*/
int num1 = 0;
int num2 = 0;
/*Primer numero*/
for (i = 0; i < size - n; i++) {
  num1 = (double) num1 + bin1[i] * pow(2, size - n - 1 - i);
}
/*Segundo numero*/
for (i = 0; i < n; i++) {
  num2 = (double) num2 + bin2[i] * pow(2, n - 1 - i);
}
/*Se muestran estos dos numeros*/
printf("\n\nLos cuales representan el numero: %d", num1);
printf(" y: %d", num2);
/*Y se muestra la suma*/
printf("\n\nQue sumados dan: %d",num1 + num2);
/*Ahora se los separa el binario de derecha a izquierda y se muestra*/
printf("\n\nQue desplazado a la derecha %i",n );
printf(" veces es: ");
/*Primer numero*/
for ( i = 0; i < n; i++) {
  bin2[i] = Bin[i];
  printf("%i",bin2[i]);
}
printf(" y: ");
/*Segundo numero*/
for ( i = 0; i < size - n ; i++) {
  bin1[i] = Bin[i + n];
  printf("%i",bin1[i] );
}
/*Ahora se transforma a decimal estas numeros*/
num1 = 0;
num2 = 0;
/*Primer numero*/
for (i = 0; i < n; i++) {
  num2 = (double) num2 + bin2[i] * pow(2, n - 1 - i);
}
/*Segundo numero*/
for (i = 0; i < size - n; i++) {
  num1 = (double) num1 + bin1[i] * pow(2, size - n - 1 - i);
}
/*Se los muestra y se muestra su suma*/
printf("\n\nLos cuales representan el numero: %d", num2);
printf(" y: %d", num1);
printf("\n\nQue sumados dan: %d",num1 + num2);

  return 0;
}
