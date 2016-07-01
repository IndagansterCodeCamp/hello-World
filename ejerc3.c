
/*3 ORDENACIÓN DE TRES NÚMEROS
Construir un programa que pida por pantalla 3 números y luego diga cuál
es el mayor, el del medio y el menor de los números ingresados*/


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

 int main(int argc, char const *argv[]) {
  int n1,n2,n3,may,med,men;

  printf("Ingresa el 1er numero\n" );
  scanf("%d",&n1 );
  printf("Ingresa el 2do numero\n" );
  scanf("%d",&n2 );
  printf("Ingresa el 3er numero\n" );
  scanf("%d",&n3 );

  if (n1>n2 && n1>n3) {
    may = n1;
    if (n2>n3) {
      med=n2;
      men=n3;}
      else
      {
        med=n3;
        men=n2;
      }
    }
  else if (n2>n1 && n2>n3) {
    may=n2;
      if (n1>n3) {
         med=n1;
         men=n3;}
      else
      {
        med=n3;
        men=n1;
      }
    }
  else if(n3>n1 && n3>n2)
  {
          may = n3;
          if (n1>n2) {
            med = n1;
            men = n2;
          }
          else
          {
            med = n2;
            men = n1;
          }
  }

  printf("Mayor %d\n",may);
  printf("Medio %d\n",med );
  printf("Menor %d\n",men );


  return 0;
}
