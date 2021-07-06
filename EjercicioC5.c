/*Realizar un programa que asigne datos a una matriz de enteros t de dos
dimensiones (5x3) y a continuacion escriba las sumas correspondientes de cada
 fila y columnas de dicha matriz*/
 #include <stdio.h>
 int main() {
   /*Se introduce la matriz*/
   int Matriz[3][5], i, j, t, suma;
   for( i = 0; i < 3; i++){
     for(j = 0; j < 5; j++){
       printf("ingrese el valor de la columna %i y la fila %i: ", i+1 ,j+1);
       scanf("%d",&t );
       Matriz[i][j] = t;
     }
   }
   /*Se muestra la matriz introducida*/
   printf("\n La matriz es:\n");
   for( i = 0; i < 3; i++){
     for( j = 0; j < 5; j++){
       printf(" %i ",Matriz[i][j] );
     }
     printf("\n");
   }
   /*Suma de las filas*/
   for( i = 0; i < 3; i++){
     for( j = 0; j < 5; j++){
       suma = suma + Matriz[i][j];
     }
     printf("\n La suma de la fila %i es: %i ", i+1, suma);
     suma = 0;
   }
   /*Suma de las columnas*/
   for( i = 0; i < 5; i++){
     for( j = 0; j < 3; j++){
       suma = suma + Matriz[j][i];
     }
     printf("\n La suma de la columna %i es: %i ", i+1, suma);
     suma = 0;
   }
 }
