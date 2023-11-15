#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    /*
    int vector1[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Ingrese el contenido del vector: \n");
        scanf("%d", &vector1[i]);
    }

    // Imprime en pantalla el contenido del Vector 12
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vector1[i]);
    }


    // Vector de Caracteres
    char Vector2[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};

    for (int i = 0; i < 10; i++)
    {
        printf("%c ", Vector2[i]);
    }
     */

    int vector3[10];
    for (int i = 0; i < 10; i++)
    {
        vector3[i] = rand()%10 + 1;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vector3[i]);
    }

    return 0;
}
