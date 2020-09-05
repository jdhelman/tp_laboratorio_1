#include "Funciones.h"

int Sumar(int primerNumero, int segundoNumero)
{
    int suma;
    suma = primerNumero + segundoNumero;

    return suma;
}

int Restar(int primerNumero, int segundoNumero)
{
    int resta;
    resta = primerNumero - segundoNumero;

    return resta;
}

float Dividir(int primerNumero, int segundoNumero)
{
    float division;
    division = (float)primerNumero / segundoNumero;

    return division;
}

int Multiplicar(int primerNumero, int segundoNumero)
{
    int multiplicacion;
    multiplicacion = primerNumero * segundoNumero;

    return multiplicacion;
}

int CalcularFactorial(int numero)
{
    int factorial;
    int i;

    factorial = 1;

    for(i=1; i <= numero; i++)
    {
        factorial = factorial * i;
    }

    return factorial;
}
