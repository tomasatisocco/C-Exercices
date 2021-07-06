/*Imprimir un tablero de ajedrez y sobre el marcar con * las celdas a las qued
se puede mover un alfil desde una a posicion dada*/
#include <stdio.h>
int main(){
  /*Se define un array de 8x8 que representa el tablero el cualse va a llenar
  con pos si es una posicion posible o vac si es una casilla vacia*/
  char T[8][8], pos = '*', vac = '_';
  int i,j,k = 4,m = 4, seguir = 1; /*k y m son las coordenadas del alfil*/
  while (seguir == 1) {
    /*Se llena el tablero con todas posiciones vacias*/
  for (i = 0; i < 8; i++) {
    for (j = 0; j < 8; j++){
      T[i][j] = vac;
    }
  }
  /*Se cambian las casillas vacias correspondientes a posibles movimientos*/
  for (i = 0; i < 8; i++){
    int a = k+i, b = k-i, c = m+i, d = m-i; /*Estas condiciones son para que no se excedan los limites del array*/
    if( a < 8 && c < 8 ){
      T[k+i][m+i] = pos;
    }if( a < 8 && d >= 0 ){
      T[k+i][m-i] = pos;
    }if( b >= 0 && c < 8 ){
      T[k-i][m+i] = pos;
    }if(b >= 0 && d >= 0 ){
      T[k-i][m-i] = pos;
    }
  }
  T[k][m] = 'A'; /*Se escribe A en la posicion del alfil*/
  /*Ahora se imprime el array y se agregan los numeros de filas y columnas*/
  for (i = 0; i < 9; i++) {
    for (j = 0; j < 9; j++){
      if( j == 8 && i== 8){ /*que no  imprima nada en la posicion 8 8*/
            printf("");
      }else if( j == 8){ /*que imprima los numeros a la iquierda*/
            printf(" %i",i+1 );
      }else if( i == 8){ /*que imprima los nimeros abajo*/
          printf( " %i  ", j+1 );
      }else{ /*que imprima el arrar que representa el tablero ya completo*/
      printf(" %c |", T[i][j]);
      }
    }
    printf("\n\n");
  }
  /*Se pregunta si se quiere continuar y se redefinen las coordenadas del alfil*/
  printf("\n\nPresione 1 para continuar\nPresione 0 para salir\nDesea continuar?: ");
  scanf("%d",&seguir);
  if (seguir == 1){
    printf("\nIntroduzca en que numero de fila desea que este el alfil: ");
    scanf("%d", &k);
    printf("\nIntroduzca en que numero de columna desea que este el alfil: ");
    scanf("%d", &m);
    printf("\nMovimientos posibles del alfil:\n");
    k = k-1, m = m-1;
  }
 }
}
