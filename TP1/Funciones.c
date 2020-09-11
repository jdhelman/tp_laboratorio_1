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

void Menu1()
{
    printf(":::CALCULADORA:::\n");
    printf("\n::Seleccione una opcion::\n");
    printf("\n1 Ingresar el primer operando (A = x)");
    printf("\n2 Ingresar el segundo operando (B = x)");
    printf("\n3 Calcular todas las operaciones: \n");
    printf("\n\ta) Sumar (x + y)");
    printf("\n\tb) Restar (x - y)");
    printf("\n\tc) Dividir (x / y)");
    printf("\n\td) Multiplicar (x * y)");
    printf("\n\te) Calcular factorial de x");
    printf("\n\tf) Calcular factorial de y\n");
    printf("\n4 Informar resultados: \n");
    printf("\n\ta) El resultado de x + y es: r");
    printf("\n\tb) El resultado de x - y es: r");
    printf("\n\tc) El resultado de x / y es: r");
    printf("\n\td) El resultado de x * y es: r");
    printf("\n\te) El factorial de x es: r");
    printf("\n\tf) El factorial de y es: r\n");
    printf("\n5 Salir");
}

void Menu2(float primerNumero)
{
    printf(":::CALCULADORA:::\n");
    printf("\n::Seleccione una opcion::\n");
    printf("\n1 Ingresar el primer operando (A = %.2f)", primerNumero);
    printf("\n1 Ingresar el segundo operando (B = y)");
    printf("\n3 Calcular todas las operaciones: \n");
    printf("\n\ta) Sumar (%.2f + y)", primerNumero);
    printf("\n\tb) Restar (%.2f - y)", primerNumero);
    printf("\n\tc) Dividir (%.2f / y)", primerNumero);
    printf("\n\td) Multiplicar (%.2f * y)", primerNumero);
    printf("\n\te) Calcular factorial de %.2f", primerNumero);
    printf("\n\tf) Calcular factorial de y\n");
}

void Menu3(float primerNumero, float segundoNumero)
{
    printf(":::CALCULADORA:::\n");
    printf("\n::Seleccione una opcion::\n");
    printf("\n1 Ingresar el primer operando (A = %.2f)", primerNumero);
    printf("\n2 Ingresar el segundo operando (B = %.2f)", segundoNumero);
    printf("\n3 Calcular todas las operaciones: \n");
    printf("\n\ta) Sumar (%.2f + %.2f)", primerNumero, segundoNumero);
    printf("\n\tb) Restar (%.2f - %.2f)", primerNumero, segundoNumero);
    printf("\n\tc) Dividir (%.2f / %.2f)", primerNumero, segundoNumero);
    printf("\n\td) Multiplicar (%.2f * %.2f)", primerNumero, segundoNumero);
    printf("\n\te) Calcular factorial de %.2f", primerNumero);
    printf("\n\tf) Calcular factorial de %.2f\n", segundoNumero);
}

void Menu4()
{
    printf("\n4 Informar resultados: \n");
    printf("\n\ta) El resultado de x + y es: r");
    printf("\n\tb) El resultado de x - y es: r");
    printf("\n\tc) El resultado de x / y es: r");
    printf("\n\td) El resultado de x * y es: r");
    printf("\n\te) El factorial de x es: r");
    printf("\n\tf) El factorial de y es: r\n");
    printf("\n5 Salir");
}
