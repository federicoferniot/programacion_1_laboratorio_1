#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANT_PRODUCTOS 1

typedef struct{
    char nombre[50];
    char descripcion[50];
    float precio;
    int id;
    int flagVacio;
}EProducto;

int imprimirProductoEnIndice(EProducto productos[], int indice,int sizeProductos);
int cargarProductoEnIndice(EProducto productos[], int indiceACargar, int sizeProductos);
void imprimirProductos(EProducto productos[], int sizeProductos);
int indiceProductoNoCargado(EProducto productos[], int sizeProductos);

int main()
{
    char seguir='s';
    int i,posicion,opcion;
    int contadorID=0;
    EProducto productos[CANT_PRODUCTOS];
    for(i=0;i<CANT_PRODUCTOS;i++)
    {
        productos[i].flagVacio=1;
    }
    while(seguir=='s')
    {
        printf("1 - Cargar producto\n");
        printf("2 - Imprimir lista productos\n");
        printf("3 - Salir\n");
        fflush(stdin);
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                posicion = indiceProductoNoCargado(productos, CANT_PRODUCTOS);
                if(posicion!=-1)
                {
                    cargarProductoEnIndice(productos, posicion, CANT_PRODUCTOS, contadorID);
                    contadorID++;
                }
                else
                {
                    printf("No hay posiciones libres\n");
                }
                break;
            case 2:
                imprimirProductos(productos, CANT_PRODUCTOS);
                break;
            case 3:
                seguir='n';
                break;
        }
    }
    return 0;
}


int cargarProductoEnIndice(EProducto productos[], int indiceACargar, int sizeProductos, int id)
{
    int retorno=-1;
    if(indiceACargar<sizeProductos && indiceACargar>=0)
    {
        printf("Ingrese el nombre del producto\n");
        fflush(stdin);
        gets(productos[indiceACargar].nombre);
        printf("Ingrese descripcion\n");
        fflush(stdin);
        gets(productos[indiceACargar].descripcion);
        printf("Ingrese el precio del producto\n");
        fflush(stdin);
        scanf("%f",&productos[indiceACargar].precio);
        productos[indiceACargar].id=id;
        productos[indiceACargar].flagVacio=0;
        retorno=0;
    }
    return retorno;
}

int imprimirProductoEnIndice(EProducto productos[], int indice,int sizeProductos)
{
    int retorno=-1;
    if(indice<sizeProductos)
    {
        if(!productos[indice].flagVacio)
        {
            printf("%d-%s \n %s: $%g\n",indice, productos[indice].nombre,
                   productos[indice].descripcion,productos[indice].precio);
            retorno=0;
        }
    }
    return retorno;
}

void imprimirProductos(EProducto productos[], int sizeProductos)
{
    int i;
    for(i=0;i<sizeProductos;i++)
    {
        if(!productos[i].flagVacio)
        {
            printf("%d-%s \n %s: $%g\n",i, productos[i].nombre,productos[i].descripcion,productos[i].precio);
        }
    }
}

int indiceProductoNoCargado(EProducto productos[], int sizeProductos)
{
    int i, indiceNoCargado=-1;
    for(i=0;i<sizeProductos;i++)
    {
        if(productos[i].flagVacio)
        {
            indiceNoCargado=i;
        }
    }
    return indiceNoCargado;
}
