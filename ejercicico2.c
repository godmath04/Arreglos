// IMPRIMIR LAS POSICIONES DONDE APARERCIO EL VALOR MAXIMO
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int vector[20];

    int menor, mayor = 0, cont = 0;

    for (int i = 0; i < 20; i++)
    {
        vector[i] = rand() % 10 +1;
    }
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", vector[i]);

        if (vector[i] >= mayor)
        {
            mayor = vector[i];
        }
        
    }
    printf("\n");
    printf("El valor maximo  es %d", mayor);
    printf("\n");
    for (int i = 0; i < 20; i++)
    {
        if (mayor == vector[i])
        {
            printf("El mayor esta en posiciones %d\n", i+1);
        }
    }

    return 0;
}