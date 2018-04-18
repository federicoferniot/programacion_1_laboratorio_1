#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

#define CANTIDAD_ELEMENTOS 7

int main()
{
    int lista[CANTIDAD_ELEMENTOS]={9,5,4,2,6,1,10};
    sort_insertion(lista, CANTIDAD_ELEMENTOS, 1);
    printf("\n");
    sort_mostrarArrayEnteros(lista, CANTIDAD_ELEMENTOS);

    return 0;
}
