/*Realizar un programa con una funcion que encuentre un elemento particular en
un array de bytes (uint8_t) de 10x10. La Funcion debera indicar si el elemento
se encuentra o no en el array y en caso afirmativo, informar su posicion y la
cantidad de veces que se encontro.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
  unsigned char matriz[10][10];
  int i, j, t, l = 0, m = 0;
  /*Se obtiene el numero que se quiere buscar*/
  printf("Ingrese que numero desea buscar: ");
  scanf("%d",&t );
  /*Se genera una matriz de numeros aleatorios de 8 bytes*/
  for( i = 0; i < 10; i++){
    for( j = 0; j < 10; j++){
      matriz[i][j] = rand() % 256;
    }
  }
  /*Se muestra la matriz*/
  printf("\nLa matriz es:\n");
  for( i = 0; i < 10; i++){
    for( j = 0; j < 10; j++){
      printf(" %i ",matriz[i][j] );
      }
     printf("\n\n");
    }
    /*Se busca el numero deseado y se muestra su posicion y se cuenta*/
  for( i = 0; i < 10; i++){
    for( j = 0; j < 10; j++){
      if( matriz [i][j] == t){
        printf("El numero ingresado se encuentra en la fila %i columna %i\n", i, j);
        m++;
      }
    }
  }
  /*Mensaje final dependiendo de si se encientra el numero en la matriz o no*/
  if( m != 0){
    printf("\nEl numero ingresado se encontro %i veces.\n",m );
  }else{
    printf("\nEl numero ingresado no se encuentra en la matriz.\n");
  }
  return 0;
}
