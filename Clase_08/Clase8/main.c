#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

int main()
{
    /*
    int arrayEdades[11] = {22,56,55,66,29};
    char arrayNombres[11][50] = {"Juan","Pedro","Jose","Luis","Diego"};
    char arrayApellidos[11][50] = {"Perez", "Gonzalez", "Garcia", "Gomez", "Dominguez"};
    */

    EPersona personas[2];

    strcpy(personas[0].nombre,"Juan");
    strcpy(personas[1].nombre,"Pedro");
    strcpy(personas[0].apellido,"Perez");
    strcpy(personas[1].apellido,"Gonzalez");
    personas[0].edad=22;
    personas[1].edad=56;

    sort_mostrarArrayEPersona(personas,2);
    printf("\n\n");
    sort_ordenarArrayEPersona(personas,2,1);
    printf("\n\n");
    sort_mostrarArrayEPersona(personas,2);
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
