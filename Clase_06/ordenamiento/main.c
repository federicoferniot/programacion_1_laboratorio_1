#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

#define CANTIDAD_ELEMENTOS 7

int main()
{
    int lista[CANTIDAD_ELEMENTOS]={10,5,4,2,6,1,9};
    expandirArray(lista,CANTIDAD_ELEMENTOS,2,5,1);
    sort_mostrarArrayEnteros(lista, CANTIDAD_ELEMENTOS);
    expandirArray(lista, CANTIDAD_ELEMENTOS,3,4,0);
    printf("\n");
    sort_mostrarArrayEnteros(lista, CANTIDAD_ELEMENTOS);

    return 0;
}
