// 2 - Imprimir os números pares de 1 a 20

#include <stdio.h>

int main()
{
    int i;

    for( i = 1; i<=20; i++){
        if ( i % 2 == 0) {
            printf ("%d\n", i);
        }
    }

    return 0;
}
