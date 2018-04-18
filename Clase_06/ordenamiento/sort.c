#include <stdio.h>
#include <stdlib.h>

int swapInt(int* primerElemento, int* segundoElemento);

/** \brief Ordena un array de enteros de forma ascendente o descendente
 *
 * \param array int* array de enteros a ordenar
 * \param cantidadElementos int cantidad de elementos del array
 * \param flagOrden int [0] para ordenar ascendente [1] para ordenar descendente
 * \return int [0] OK [-1] ERROR
 *
 */
int sort_ordenarArrayEnteros(int* array, int cantidadElementos, int flagOrden)
{
    int retorno=-1;
    if(cantidadElementos>0)
    {
        retorno=0;
        int flagSwap;
        int i;

        do
        {
            flagSwap=0;
            for(i=0; i<cantidadElementos-1; i++)
            {
                if((array[i]<array[i+1] && flagOrden) || (array[i]>array[i+1] && !flagOrden))
                {
                    swapInt(&array[i],&array[i+1]);
                    flagSwap++;
                }
            }
        }while(flagSwap);
    }
    return retorno;
}

/** \brief Ordena un array de enteros de forma ascendente o descendente
 *
 * \param array int* array de enteros a ordenar
 * \param cantidadElementos int cantidad de elementos del array
 * \param flagOrden int [0] para ordenar ascendente [1] para ordenar descendente
 * \return int [0] OK [-1] ERROR
 *
 */
int sort_insertion(int* array, int cantidadElementos, int flagOrden)
{
    int retorno=-1;
    int i,j;
    int temp;
    if(cantidadElementos>0)
    {
        retorno=0;
        for(i=1;i<cantidadElementos;i++)
        {
            temp=array[i];
            j=i-1;
            while((j>=0 && temp>array[j] && flagOrden) || (j>=0 && temp<array[j] && !flagOrden))
            {
                array[j+1]=array[j];
                j--;
            }
            array[j+1]=temp;
        }
    }
    return retorno;
}

/** \brief Imprime por pantalla un array de enteros
 *
 * \param array int* array a mostrar
 * \param cantidadElementos int cantidad de elementos del array
 * \return int [0] OK, [-1] ERROR
 *
 */
int sort_mostrarArrayEnteros(int* array, int cantidadElementos)
{
    int retorno=-1;
    if(cantidadElementos>0)
    {
        retorno=0;
    }
    int i;
    for(i=0; i<cantidadElementos;i++)
    {
        printf("\n%d", array[i]);
    }
    return retorno;
}

/** \brief Intercambia contenido entre dos enteros
 *
 * \param primerElemento int*
 * \param segundoElemento int*
 * \return int [0] OK
 *
 */
int swapInt(int* primerElemento, int* segundoElemento)
{
    int auxiliar=*segundoElemento;
    *segundoElemento=*primerElemento;
    *primerElemento=auxiliar;
    return 0;
}

/** \brief Expande un array de enteros según sentido indicado, desplazando el bloque desde/hasta
 *
 * \param array int* Array a expandir
 * \param cantidadElementos int cantidad de elementos del array
 * \param desde int indica el comienzo del bloque a desplazar
 * \param hasta int indica el final del bloque a desplazar
 * \param sentido int sentido al que desplaza el bloque indicado [1] Derecha, [0] Izquierda
 * \return int [0] OK, [1] ERROR
 *
 */
int expandirArray(int* array, int cantidadElementos, int desde, int hasta, int sentido)
{
    int retorno=-1;
    if(cantidadElementos>0 && (desde<hasta))
    {
        if(sentido)
        {
            for(;hasta>=desde;hasta--)
            {
                array[hasta+1]=array[hasta];
            }
            array[desde]=-1;
        }
        else
        {
            for(;desde<=hasta;desde++)
            {
                array[desde-1]=array[desde];
            }
            array[hasta]=-1;
        }
    }
    return retorno;
}
