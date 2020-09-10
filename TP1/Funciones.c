#include "Funciones.h"

float Sumar(float primerNumero, float segundoNumero)
{
    float suma;
    suma = primerNumero + segundoNumero;

    return suma;
}

float Restar(float primerNumero, float segundoNumero)
{
    float resta;
    resta = primerNumero - segundoNumero;

    return resta;
}

float Dividir(float primerNumero, float segundoNumero)
{
    float division;
    division = primerNumero / segundoNumero;

    return division;
}

float Multiplicar(float primerNumero, float segundoNumero)
{
    float multiplicacion;
    multiplicacion = primerNumero * segundoNumero;

    return multiplicacion;
}

double CalcularFactorial(double numero)
{
    double factorial;
    int i;

    factorial = 1;

    for(i=1; i <= numero; i++)
    {
        factorial = factorial * i;
    }

    return factorial;
}

int ValidarEntero(float numero)
{
    int validacionEntero;
    int numeroEntero;
    //double = factorial;

    numeroEntero = numero;

    if((numero - numeroEntero)|| numero < 0)
    {
        validacionEntero = 0;
    }
    else
    {
        validacionEntero = 1;
    }

    return validacionEntero;
}
