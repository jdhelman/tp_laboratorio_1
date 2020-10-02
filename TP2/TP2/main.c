#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"
#include "Empleados.h"

#define TAM 1000


int main()
{
    eEmpleado listadoEmpleados[TAM];
    int opcion;
    int opcionMostrar;
    int resultadoModificar;
    int resultadoEliminar;
    int banderaIngresos;
    int idActual;
    int contadorEmpleados;
    int acumuladorEmpleados;
    int contadorMayorSueldo;
    float acumuladorSueldo;
    float promedioSueldo;

    banderaIngresos = 0;
    idActual = 0;
    contadorEmpleados = 0;
    acumuladorEmpleados = 0;
    acumuladorSueldo = 0;
    contadorMayorSueldo = 0;

    inicializarListadoEmpleados(listadoEmpleados,TAM);

    do
    {
        menuPrincipal();

        opcion = pedirNumero("\nIngrese una opcion: ");

        switch(opcion)
        {
            case 1:
                limpiarPantalla();
                idActual = cargarListadoDeEmpleados(listadoEmpleados, contadorEmpleados, idActual, TAM);
                banderaIngresos = 1;
                break;

            case 2:
                if(banderaIngresos == 0)
                {
                    limpiarPantalla();
                    printf("\nError. Primero debe dar de alta empleados\n");
                }
                else
                {
                    limpiarPantalla();
                    menuModificar();
                    resultadoModificar = modificarEmpleado(listadoEmpleados, contadorEmpleados, TAM);
                    if(resultadoModificar == 0)
                    {
                        printf("\n\nSe ha realizado la modificacion correctamente.\n");
                    }
                    else
                    {
                        printf("\n\nEl ID ingresado no existe.");
                    }
                }
                break;

            case 3:
                if(banderaIngresos == 0)
                {
                    limpiarPantalla();
                    printf("\nError. Primero debe dar de alta empleados\n");
                }
                else
                {
                    limpiarPantalla();
                    resultadoEliminar = eliminarEmpleado(listadoEmpleados, contadorEmpleados, TAM);
                    if(resultadoEliminar == 0)
                    {
                        printf("\nSe ha eliminado correctamente.\n");
                    }
                    else
                    {
                        printf("\nEl ID ingresado no existe.\n");
                    }
                }
                break;

            case 4:
                if(banderaIngresos == 0)
                {
                    limpiarPantalla();
                    printf("\nError. Primero debe dar de alta empleados\n");
                }
                else
                {
                    limpiarPantalla();
                    menuMostrar();
                    opcionMostrar = pedirNumero("\n\nIngrese una opcion: ");
                    while(opcionMostrar != 1 && opcionMostrar != 2)
                    {
                        opcionMostrar = pedirNumero("\n\nError, opcion invalida. Ingrese una opcion: ");
                    }
                    if(opcionMostrar == 1)
                    {
                        ordenarEmpleadosPorApellido(listadoEmpleados, TAM);
                        mostrarListadoEmpleados(listadoEmpleados, TAM);
                        printf("\n");
                    }
                    else
                    {
                        acumuladorSueldo = acumularSueldos(listadoEmpleados, TAM);
                        acumuladorEmpleados = contarEmpleados(listadoEmpleados, TAM);
                        promedioSueldo = promediarSueldos(acumuladorEmpleados, acumuladorSueldo);
                        contadorMayorSueldo = contarSueldosMasAltos(promedioSueldo, listadoEmpleados, TAM);
                        printf("\n- El total de sueldos acumulados es %.2f", acumuladorSueldo);
                        printf("\n- El promedio de sueldos es %.2f", promedioSueldo);
                        printf("\n- La cantidad de empleados que superan el sueldo promedio es: %d\n", contadorMayorSueldo);
                    }
                }
                break;
            case 5:
                break;
            default :
                limpiarPantalla();
                printf("\nError, opcion invalida.\n");
                break;
        }
    }while(opcion != 5);

    return 0;
}
