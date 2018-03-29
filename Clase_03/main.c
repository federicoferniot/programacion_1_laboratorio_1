#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int sumaEntero(int primerNumero, int segundoNumero, float* resultado);
int restaEntero(int primerNumero, int segundoNumero, float* resultado);
int divisionEntero(int primerNumero, int segundoNumero, float* resultado);
int multiplicacionEntero(int primerNumero, int segundoNumero, float* resultado);

int main()
{
    int primerNumero;
    int segundoNumero;
    char opcion;
    float resultado;

    printf("Ingrese el primer numero\n");
    scanf("%d", &primerNumero);

    printf("Ingrese el segundo numero\n");
    scanf("%d", &segundoNumero);

    printf("Que operacion desea realizar:\n 1-Realizar suma\n 2-Realizar resta\n 3-Realizar multiplicacion\n 4-Realizar division\n");
    fflush(stdin);
    scanf("%c", &opcion);
    switch(opcion)
    {
        case '1':
            if(sumaEntero(primerNumero, segundoNumero, &resultado)==0)
            {
                printf("La suma es %g\n", resultado);
            }
            else
            {
                printf("Hubo un error\n");
            }
            break;
        case '2':
            if(restaEntero(primerNumero, segundoNumero, &resultado)==0)
            {
                printf("La resta es %g\n", resultado);
            }
            else
            {
                printf("Hubo un error\n");
            }
            break;
        case '3':
            if(multiplicacionEntero(primerNumero, segundoNumero, &resultado)==0)
            {
                printf("La multiplicacion es %g\n", resultado);
            }
            else
            {
                printf("Hubo un error\n");
            }
            break;
        case '4':
            if(divisionEntero(primerNumero, segundoNumero, &resultado)==0)
            {
                printf("La division es %g\n", resultado);
            }
            else
            {
                printf("Error, no se puede dividir por 0\n");
            }
            break;
    }
    return 0;
}

int sumaEntero(int primerNumero, int segundoNumero, float* resultado)
{
    long resultadoCalculo;
    int retorno = -1;

    resultadoCalculo = primerNumero+segundoNumero;
    if(resultadoCalculo<INT_MAX && resultadoCalculo>INT_MIN)
    {
        *resultado = resultadoCalculo;
        retorno = 0;
    }
    return retorno;
}

int restaEntero(int primerNumero, int segundoNumero, float* resultado)
{
    long resultadoCalculo;
    int retorno = -1;

    resultadoCalculo = primerNumero-segundoNumero;
    if(resultadoCalculo<INT_MAX && resultadoCalculo>INT_MIN)
    {
        *resultado = resultadoCalculo;
        retorno = 0;
    }
    return retorno;
}

int multiplicacionEntero(int primerNumero, int segundoNumero, float* resultado)
{
    long resultadoCalculo;
    int retorno=-1;

    resultadoCalculo = primerNumero*segundoNumero;
    if(resultadoCalculo<INT_MAX && resultadoCalculo>INT_MIN)
    {
        *resultado=resultadoCalculo;
        retorno=0;
    }
    return retorno;
}

int divisionEntero(int primerNumero, int segundoNumero, float* resultado)
{
    int retorno=-1;
    if(segundoNumero!=0)
    {
        *resultado = (float)primerNumero/segundoNumero;
        retorno=0;
    }
    return retorno;
}
