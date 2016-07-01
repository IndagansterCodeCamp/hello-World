
/*Construir un programa que pida por pantalla 3 números
y luego diga cuál es el mayor de los números ingresados.*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
 int main(int argc, char const *argv[])
 {
   int n1,n2,n3,may;

   s

   if (n1>n2 && n1>n3) {

     may = n1;
   }
   else if (n2>n1 && n2>n3) {
     may = n2;
   }
   else if (n3>n1 && n3>n2) {
     may = n3;
   }


   printf("El numero mayor es %d\n",may );

   getch;
   return 0;
 }
