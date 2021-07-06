/*Realizar u nprograma que asigne numeros enteros aleatorios entre 400 y 600
que no se repitan en una matriz t de 5x10.A continuacion ordene la matriz
utilizando el metodo de la burbuja de menor a mayor donde el primer elemento
t[0][0] es el menor y el ultimo elemento t[4][9]es el mayor. Muestre la matriz
generada desordenada y la matriz ordenada para ver el resultado.*/
#include <stdio.h>
#include <stdlib.h> /*fichero para usar rand()*/
int main(){
int Mat[5][10]; /*Madriz del orden pedido*/
int Vec[50]; /*Vactor con la misma cantidad de elementos*/
int i, j, m, t;
/*Se llena el vector con numeros aleatorios segun la especificacion*/
for (i = 0; i < 50; i++){
  t = rand() % 201 + 400;
  for (j = 0; j < 50; j++){ /*este for es para que no se repitan*/
    if (t == Vec[j]){
      t = rand() % 201 + 400;
      j = 0;
    }
  }
   Vec[i] = t;
}
/*Se pasan los valores del vector a la matriz*/
for( i = 0; i < 5; i++){
  for( j = 0; j < 10; j++){
    t = 10 * i + j;
    Mat[i][j] = Vec[t];
    }
  }
  /*Se muestra la matriz*/
  printf("\nLa matriz de valores aleatorios es:\n");
for( i = 0; i < 5; i++){
  for( j = 0; j < 10; j++){
    printf(" %i ",Mat[i][j] );
    }
   printf("\n");
  }
  /*Se aplica el metodo burbuja sobre el vector*/
  m = 0;
  j = 1;
  while(m == 0){
    m = 1;
    for( i = 0; i < 50 - j; i++){
      if( Vec[i] > Vec[i+1]){
        t = Vec[i];
        Vec[i] = Vec[i+1];
        Vec[i+1] = t;
        m = 0;
      }
      j++;
    }
  }
  /*Se vuelve a llenar la matriz con los valores ya ordenados*/
  for( i = 0; i < 5; i++){
    for( j = 0; j < 10; j++){
      t = 10 * i + j;
      Mat[i][j] = Vec[t];
      }
    }
    /*Se muestra la nueva matriz*/
  printf("\nLa matriz ordenada de mayo a menor es:\n");
  for( i = 0; i < 5; i++){
    for( j = 0; j < 10; j++){
      printf(" %i ",Mat[i][j] );
      }
     printf("\n");
    }
return 0;
}
