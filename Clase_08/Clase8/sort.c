#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int swapInt(int* primerEntero,int* segundoEntero);
int swapCadenaCaracteres(char* primerCadena,char* segundaCadena);
typedef struct
{
    int edad;
    char nombre[50];
    char apellido[50];
}EPersona;


/** \brief  Ordena un array de enteros
 *
 * \param array int* Puntero al array
 * \param cantidadElementos int cantidad de elementos del array
 * \param flagOrden int [1] Ordena de mayor a menor [0] Ordena de menor a mayor
 * \return int [-1] Error [0] Ok
 *
 */
int sort_ordenarArrayEnteros(int* array,int cantidadElementos, int flagOrden)
{
    int retorno = -1;
    int flagSwap;
    int i;
    if(cantidadElementos > 0)
    {
        retorno = 0;
        do
        {
            flagSwap = 0;
            for(i=0;i<cantidadElementos-1;i++)
            {
                if((array[i] < array[i+1] && flagOrden)||(array[i] > array[i+1] && !flagOrden))
                {
                    swapInt(&array[i],&array[i+1]);
                    flagSwap = 1;
                }
            }
        }while(flagSwap);
    }
    return retorno;
}

/** \brief
 *
 * \param array[][50] char
 * \param cantidadElementos int
 * \param flagOrden int
 * \return int
 *
 */
int sort_ordenarArrayCadenaCaracteres(char array[][50],int cantidadElementos, int flagOrden)
{
    int retorno = -1;
    int flagSwap;
    int i;
    if(cantidadElementos > 0)
    {
        retorno = 0;
        do
        {
            flagSwap = 0;
            for(i=0;i<cantidadElementos-1;i++)
            {
                if((strcmp(array[i],array[i+1])<0 && flagOrden) || (strcmp(array[i],array[i+1])>0 && !flagOrden))
                {
                    swapCadenaCaracteres(array[i],array[i+1]);
                    flagSwap = 1;
                }
            }
        }while(flagSwap);
    }
    return retorno;
}

int sort_ordenarArrayEPersona(EPersona array[], int cantidadElementos, int flagOrden)
{
    int retorno = -1;
    int flagSwap;
    int i;
    EPersona personaAux;
    if(cantidadElementos > 0)
    {
        retorno = 0;
        do
        {
            flagSwap = 0;
            for(i=0;i<cantidadElementos-1;i++)
            {
                if((strcmp(array[i].nombre,array[i+1].nombre)<0 && flagOrden) || (strcmp(array[i].nombre,array[i+1].nombre)>0 && !flagOrden))
                {
                    personaAux=array[i];
                    array[i]=array[i+1];
                    array[i+1]=personaAux;
                    flagSwap = 1;
                }
            }
        }while(flagSwap);
    }
    return retorno;
}

/** \brief Intercambia dos enteros
 *
 * \param primerEntero int*
 * \param segundoEntero int*
 * \return int
 *
 */
int swapInt(int* primerEntero,int* segundoEntero)
{
    int auxiliar;
    auxiliar = *primerEntero;
    *primerEntero = *segundoEntero;
    *segundoEntero = auxiliar;
    return 0;
}

int swapCadenaCaracteres(char* primerCadena,char* segundaCadena)
{
    char auxiliar[50];
    strcpy(auxiliar,primerCadena);
    strcpy(primerCadena,segundaCadena);
    strcpy(segundaCadena,auxiliar);
    return 0;
}


/** \brief
 *
 * \param array int*
 * \param cantidadElementos int
 * \return int
 *
 */
int sort_mostrarArrayEnteros(int* array, int cantidadElementos)
{
    int retorno = -1;
    int i;
    if(cantidadElementos > 0)
    {
        retorno = 0;
        for(i=0;i<cantidadElementos;i++)
        {
            printf("\n%d",array[i]);
        }
    }
    return retorno;
}


/** \brief
 *
 * \param
 * \param cantidadElementos int
 * \return int
 *
 */
int sort_mostrarArrayCadenaCaracteres(char array[][50], int cantidadElementos)
{
    int retorno = -1;
    int i;
    if(cantidadElementos > 0)
    {
        retorno = 0;
        for(i=0;i<cantidadElementos;i++)
        {
            printf("\n%s",array[i]);
        }
    }
    return retorno;
}

int sort_mostrarArrayEPersona(EPersona array[], int cantidadElementos)
{
    int retorno = -1;
    int i;
    if(cantidadElementos > 0)
    {
        retorno = 0;
        for(i=0;i<cantidadElementos;i++)
        {
            printf("\n%s %s: %d",array[i].nombre, array[i].apellido, array[i].edad);
        }
    }
    return retorno;
}
