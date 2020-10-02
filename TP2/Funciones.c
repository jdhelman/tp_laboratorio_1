#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Funciones.h"
#include "Empleados.h"

void menuPrincipal()
{
    printf("\n::::::::::NOMINA DE EMPLEADOS:::::::::::\n\nSeleccione una opcion: \n1. ALTAS\n2. MODIFICAR\n3. BAJAS\n4. INFORMAR\n5. SALIR\n");
}

void menuModificar()
{
    printf("\nSeleccione si desea eliminar:\n\n1. Nombre\n2. Apellido\n3. Sueldo\n4. Sector");
}

void menuMostrar()
{
    printf("\nSeleccione si desea mostrar:\n\n1. Listado de los empleados ordenados alfabeticamente por Apellido y Sector.\n2. Total y promedio de los salarios, y cuantos empleados superan el salario promedio.");
}

int pedirNumero(char mensaje[])
{
    int aux;
    printf("%s",mensaje);
    while(!(scanf("%d",&aux) == 1))
    {
        fflush(stdin);
        printf("Error, ingrese un numero: ");
    }
    return aux;
}

float pedirFlotante(char mensaje[])
{
    float aux;
    printf("%s",mensaje);
    scanf("%f",&aux);

    return aux;
}

void primeraLetraMayus(char dato[])
{
    int i;
    int tam;

    tam = strlen(dato);
    strlwr(dato);
    dato[0] = toupper(dato[0]);
    for(i = 0; i< tam; i++)
    {
        if(isspace(dato[i]))
        {
            dato[i+1] = toupper(dato[i+1]);
        }
    }
}

void pedirCadenaSimple(char mensaje[], char input[])
{
    printf("%s", mensaje);
    fflush(stdin);
    scanf("%[^\n]", input);
}

void pedirCadenaConExtension(char mensaje[], char mensajeError[], char dato[], int tam)
{
    char buffer[1024];

    pedirCadenaSimple(mensaje, buffer);
    while(strlen(buffer)>tam-1)
    {
        printf("%s", mensajeError);
        fflush(stdin);
        scanf("%[^\n]", buffer);
    }
    strcpy(dato, buffer);
}

void limpiarPantalla()
{
    system("cls");
}

