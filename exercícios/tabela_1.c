#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void) {
  int i;
  float rad,ang;
  for (i=0;i<=50;i++)
      printf("-");
  printf("\n");
  // adicionando \t depois das funções trigonométricas
  printf ("|\ti\t\t|\tcos\t\t|\tsen\t\t|\ttang\t\t|\n");
  for (ang=0;ang<=360;ang+=30) {
       rad=ang*3.1416/180;
       // adiocionando %f faltante
       printf("|\t%f\t|\t%f\t|\t%f\t|\t%f\t|\n",ang,cos(rad),sin(rad),tan(rad));
  }
  return 0;
}