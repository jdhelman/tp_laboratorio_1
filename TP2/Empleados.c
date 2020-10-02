#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "Funciones.h"
#include "Empleados.h"

#define VERDADERO 1
#define FALSO 0

int inicializarListadoEmpleados(eEmpleado listado[],int tam)
{
    int  i;
	int retorno = -1;

	if(listado != NULL && tam > 0){
		retorno = 0;
		for (i=0; i<tam; i++) {
			listado[i].estaVacio = VERDADERO;
		}
	}
	return retorno;
}

int buscarPrimerLugarEmpleados(eEmpleado listado[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(listado[i].estaVacio == VERDADERO)
        {
            return i;
        }
    }
    return -1;
}

eEmpleado cargarEmpleado()
{
    eEmpleado empleado;

    pedirCadenaConExtension("Ingrese el nombre: ","Error, supera el límite de caracteres permitidos, reintente: ", empleado.nombre, 51);
    primeraLetraMayus(empleado.nombre);
    pedirCadenaConExtension("Ingrese el apellido: ","Error, supera el límite de caracteres permitidos, reintente: ", empleado.apellido, 51);
    primeraLetraMayus(empleado.apellido);
    empleado.sueldo = pedirFlotante("Ingrese el sueldo: ");
    empleado.sector = pedirNumero("Ingrese el numero de sector: ");
    empleado.estaVacio = FALSO;

    return empleado;
}

int cargarListadoDeEmpleados(eEmpleado listado[], int contadorEmpleado, int idEmpleado, int tam)
{
    int i;
    int primerLugarLibre;
    char respuesta;

    primerLugarLibre = buscarPrimerLugarEmpleados(listado, tam);

    if(primerLugarLibre == -1)
    {
        printf("\nMemoria LLena!!!\n");
    }
    else
    {
        for(i = primerLugarLibre; i<tam; i++)
        {
            listado[i] = cargarEmpleado();
            contadorEmpleado++;
            idEmpleado++;
            listado[i].idEmpleado = idEmpleado;

            if(listado[i+1].estaVacio == VERDADERO)
            {
                printf("\nDesea cargar otro empleado? Responda con s o n: ");
                fflush(stdin);
                scanf("%s", &respuesta);
                while(respuesta != 's' && respuesta != 'n')
                {
                    printf("\nError. Responda con s o n: ");
                    fflush(stdin);
                    scanf("%s", &respuesta);
                }
                if(respuesta == 'n')
                {
                    break;
                }
            }
            else
            {
                printf("\nMemoria LLena!!!\n");
                break;
            }
        }
    }

    return idEmpleado;
}

void mostrarUnEmpleado(eEmpleado empleado)
{
    printf("%-16d %-12s %-12s %-12.2f %-12d\n", empleado.idEmpleado, empleado.nombre, empleado.apellido, empleado.sueldo, empleado.sector);
}

void mostrarListadoEmpleados(eEmpleado listado[], int tam)
{
    int i;

    printf("ID de Empleado   Nombre       Apellido     Sueldo      Sector\n");

        for(i=0; i<tam; i++)
        {
            if(listado[i].estaVacio != VERDADERO)
            {
                mostrarUnEmpleado(listado[i]);
            }
        }
}

int eliminarEmpleado(eEmpleado listado[], int contadorEmpleado, int tam)
{
    int i;
	int retorno = -1;
	int banderaNoEncontrado = 1;
	int idEmpleado;

	idEmpleado = pedirNumero("\nIngrese el ID del empleado que quiere dar de baja: ");

	if(tam > 0 && idEmpleado > 0)
	{
		for (i=0; i<tam; i++)
        {
			if((listado[i].idEmpleado == idEmpleado) && listado[i].estaVacio == FALSO)
                {
				listado[i].estaVacio = VERDADERO;
				contadorEmpleado--;
				banderaNoEncontrado = 0;
				retorno = 0;
			}
		}
		if(banderaNoEncontrado == 1){
			retorno = -2;
		}
	}

	return retorno;
}

int modificarEmpleado(eEmpleado listado[], int contadorEmpleado, int tam)
{
    int i;
    int opcion;
	int retorno = -1;
	int banderaNoEncontrado = 1;
	int idEmpleado;

	opcion = pedirNumero("\nIngrese la opcion que quiere modificar: ");
	while(opcion != 1 && opcion != 2 && opcion != 3 && opcion != 4)
    {
        opcion = pedirNumero("\nOpcion invalida. Ingrese el numero del dato que quiere modificar: ");
    }
	idEmpleado = pedirNumero("\nIngrese el ID del empleado que quiere modificar: ");

	if(tam > 0 && idEmpleado > 0)
	{
		for (i=0; i<tam; i++) {
			if((listado[i].idEmpleado == idEmpleado) && listado[i].estaVacio == FALSO)
            {
                if(opcion == 1)
                {
                    pedirCadenaConExtension("Ingrese el nombre: ","Error, supera el límite de caracteres permitidos, reintente: ", listado[i].nombre, 51);
                    primeraLetraMayus(listado[i].nombre);
                }
                else if (opcion == 2)
                {
                    pedirCadenaConExtension("Ingrese el apellido: ","Error, supera el límite de caracteres permitidos, reintente: ", listado[i].apellido, 51);
                    primeraLetraMayus(listado[i].apellido);
                }
                else if (opcion == 3)
                {
                    listado[i].sueldo = pedirFlotante("Ingrese el sueldo: ");
                }
                else if (opcion == 4)
                {
                    listado[i].sector = pedirNumero("Ingrese el numero de sector: ");
                }
				banderaNoEncontrado = 0;
				retorno = 0;
			}
		}
		if(banderaNoEncontrado == 1){
			retorno = -2;
		}
	}

	return retorno;
}

void ordenarEmpleadosPorApellido(eEmpleado listado[], int tam)
{
    int i;
    int j;
    eEmpleado auxApellido;
    eEmpleado auxSector;

    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(strcmp(listado[i].apellido,listado[j].apellido) > 0)
            {
                auxApellido = listado[i];
                listado[i] = listado[j];
                listado[j] = auxApellido;
            }
            if((strcmp(listado[i].apellido,listado[j].apellido) == 0) && (listado[i].sector > listado[j].sector))
            {
                auxSector = listado[i];
                listado[i] = listado[j];
                listado[j] = auxSector;
            }
        }
    }
}

float acumularSueldos(eEmpleado listado[], int tam)
{
    int i;
    float acumuladorSueldos;

    acumuladorSueldos = 0;

    for(i=0; i<tam; i++)
    {
        if(listado[i].estaVacio == FALSO)
        {
            acumuladorSueldos = acumuladorSueldos + listado[i].sueldo;
        }
    }
    return acumuladorSueldos;
}

int contarEmpleados(eEmpleado listado[], int tam)
{
    int i;
    int contadorEmpleados;

    contadorEmpleados = 0;

    for(i=0; i<tam; i++)
    {
        if(listado[i].estaVacio == FALSO)
        {
            contadorEmpleados++;
        }
    }
    return contadorEmpleados;
}

float promediarSueldos(int cantidadEmpleados, float sumatoriaSueldos)
{
    float promedio;

    promedio = sumatoriaSueldos / cantidadEmpleados;

    return promedio;
}

int contarSueldosMasAltos(float promedioSueldos, eEmpleado listado[], int tam)
{
    int i;
    int cantidadSueldoMasAlto;

    cantidadSueldoMasAlto = 0;

    for(i=0; i<tam; i++)
    {
        if(listado[i].estaVacio == FALSO)
        {
            if(listado[i].sueldo > promedioSueldos)
            {
                cantidadSueldoMasAlto++;
            }
        }
    }

    return cantidadSueldoMasAlto;
}

