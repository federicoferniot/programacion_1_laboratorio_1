
typedef struct
{
    int edad;
    char nombre[50];
    char apellido[50];
}EPersona;



int sort_ordenarArrayEnteros(int* array,int cantidadElementos, int flagOrden);
int sort_mostrarArrayEnteros(int* array, int cantidadElementos);
int sort_mostrarArrayCadenaCaracteres(char array[][50], int cantidadElementos);
int sort_ordenarArrayCadenaCaracteres(char array[][50],int cantidadElementos, int flagOrden);
int sort_mostrarArrayEPersona(EPersona array[], int cantidadElementos);
int sort_ordenarArrayEPersona(EPersona array[], int cantidadElementos, int flagOrden);
