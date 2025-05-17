#include <stdio.h>

void main()
{
  int list[5];
  int i, calif=0;
  float prom;

  for (i=0;i<5;i++)
  {
     printf("introducir la calificación número %d: ", i+1);
     scanf("%d", &list[i]);
  }

  for (i=0;i<5;i++)
  {
     calif=calif+list[i];
  }
  prom=calif/5;
  printf("El promedio de las calificaciones es: %f\n", prom);
}
