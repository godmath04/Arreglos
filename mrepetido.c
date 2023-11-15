/*En un vector de tamaño de tipo 20 de tipo int,
 llenelos de numeros aleatorias entre 1-10
  y que cuente cuantas veces se repite el numero menor */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int vector[20];

    int menor, mayor, cont = 0;

    for (int i = 0; i < 20; i++)
    {
        vector[i] = rand() % 10 +1 ;
    }
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", vector[i]);
    }

    menor = 10;
    for (int i = 0; i < 20; i++)
    {
        if (vector[i] <= menor)
        {
            menor = vector[i];
        }

        if (vector[i] == menor)
        {
            cont += 1;
        }
    }
    printf("\n");
    printf("El numero menor es %d y el numero de repeticiones es %d", menor, cont);

    return 0;
}
