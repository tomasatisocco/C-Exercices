/* Realizar un programa que lea un entero y la posicion de dos bits,
 luego muestre el valor de los bits entre los bits indicados*/
 #include<stdio.h>
 #include<stdlib.h> /*fichero para usar abs*/
 #include<math.h> /*fichero para usar pw y (double)*/
 int main()
 {
 long num; /*Se utiliza una variable larga num que sera donde se deposite el numero
 decimal deseado, la variable es larga para asi soportar hasta 2.147.483.647 */
 int bin1[32]; /*Se utilizara un arreglo de 32 bits para depositar el numero
 en codigo binari*/
 int r;
 int i;
   printf("\nIngrese el numero deseado: ");
   scanf("%d",&num);
   /*El numero se leyo y ahora se lo transformara en binario*/
   for (i = 0; i < 32; i++) {
     r = 31-i;
     bin1[r] = num% 2;
     num = num / 2;
   }
   /*De esta manera queda un arreglo de 32 bits pero en la mayoria de los casos
   no sera necesario todos estos bits por lo que recortaremos todos los bits
   que valen cero antes del numero que importa.
   A continucaion se busca el largo de este numero*/
   int size;
  for (i = 0; i < 32; i++) {
    if (bin1[i] == 1) {
      size = 32-i;
      break;
    }
  }
  /*Ahora se vuelve a escribir el numero sin los ceros y se muestra*/
   int Bin1[size];
   for (i = 0; i < size; i++) {
     Bin1[i] = bin1[32-size+i];
   }
   printf("\nEl numero en codigo binario es: ");
   for (i = 0; i < size; i++) {
    printf("%i",Bin1[i] );
   }
   /*Ahora se pide que se ingrese los bits deseados y se extraen*/
   int num1;
   int num2;
   printf("\n\nIngrese los bits con los que se quiere formar el nuevo numero estos deben estar entre 0 y %i\n",size - 1 );
   printf("\nIngrese un bit: ");
   scanf("%d",&num1);
   printf("\nIngrese otro bit: ");
   scanf("%d",&num2);
   int size2 = abs(num1 - num2)+1;
   int bin2[size2];
   /*Se formara el nuevo numero en binario independientemente del orden*/
   if (num1 > num2) {
     for (i = 0; i < size2; i++) {
       bin2[i] = Bin1[size - num1 + i - 1];
     }
   }else{
     for (i = 0; i < size2; i++) {
       bin2[i] = Bin1[size - num2 + i - 1];
     }
   }
   printf("\nLos Bits seleccionados son: ");
   for (i = 0; i < size2; i++) {
    printf("%i",bin2[i] );
   }
   /*Ahora se transformara ese numero de binario a decimal*/
   int Num = 0;
   for (i = 0; i < size2; i++) {
     Num = (double) Num + bin2[i] * pow(2, size2 - 1 - i);
   }
   printf("\n\nLos cuales representan el numero: %d", Num);
   return 0;
 }
