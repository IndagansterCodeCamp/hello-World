/*1 NUMERO ES PAR O NO
Construir un programa que pida un número y luego diga si es número es par o no*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
 int main(int argc, char const *argv[]) {
  int num;

  printf("teclee un numero y te dire si es par o no\n" );
  scanf("%d",&num );
  if (num%2==0) {
    printf("El numero %d es par\n",num );
  }
  else
  {
    printf("El numero %d es Impar\n",num );
  }

  getch();
  return 0;
}
