#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

int main()
{
    int arrayEdades[11] = {22,56,55,66,29};
    char arrayNombres[11][50] = {"Juan","Pedro","Jose","Luis","Diego"};
    char arrayApellidos[11][50] = {"Perez", "Gonzalez", "Garcia", "Gomez", "Dominguez"};


    sort_mostrarArrayCadenaCaracteresParalelo(arrayNombres, arrayEdades, arrayApellidos,5);
    printf("\n\n");
    sort_ordenarArrayCadenaCaracteresParalelo(arrayNombres, arrayEdades, arrayApellidos,5,1);
    printf("\n\n");
    sort_mostrarArrayCadenaCaracteresParalelo(arrayNombres, arrayEdades, arrayApellidos,5);
/*
    if(!sort_ordenarArrayEnteros(arrayEdades,5,1))
    {
        sort_mostrarArrayEnteros(arrayEdades,5);
        printf("\n\n");
    }
    else
    {
        printf("ERROR");
    }
    */
    return 0;
}
