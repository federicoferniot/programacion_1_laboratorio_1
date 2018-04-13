#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "input.h"

int main()
{
    int numero;
    char arrayAux[50];
    fgets(arrayAux, sizeof(arrayAux), stdin);
    arrayAux[strlen(arrayAux)-1]=0;

    int retorno=0;
    int i;
    for(i=0;i<strlen(arrayAux);i++)
    {
        if(arrayAux[i]<'0' || arrayAux[i]>'9')
        {
            retorno=-1;
            break;
        }
    }
    if(retorno==0)
    {
        numero=atoi(arrayAux);
    }

    printf("%d", numero);
    return 0;
}
