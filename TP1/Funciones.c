#include "Funciones.h"
#include <stdio.h>

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

int ValidarEnteroPositivo(float numero)
{
    int validacionEnteroPositivo;
    int numeroEnteroPositivo;

    numeroEnteroPositivo = numero;

    if((numero - numeroEnteroPositivo)|| numero < 0)
    {
        validacionEnteroPositivo = 0;
    }
    else
    {
        validacionEnteroPositivo = 1;
    }

    return validacionEnteroPositivo;
}

void MenuCalculadora(float primerNumero, float segundoNumero, int banderaA, int banderaB, int opcion, int banderaOpciones, float suma, float resta, float division, float multiplicacion, double factorialA, double factorialB)
{

    if(banderaA == 0)
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
      else if(banderaB == 0)
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
          printf("\n4 Informar resultados: \n");
          printf("\n\ta) El resultado de x + y es: r");
          printf("\n\tb) El resultado de x - y es: r");
          printf("\n\tc) El resultado de x / y es: r");
          printf("\n\td) El resultado de x * y es: r");
          printf("\n\te) El factorial de x es: r");
          printf("\n\tf) El factorial de y es: r\n");
          printf("\n5 Salir");
      }
      else if(banderaA == 1 && banderaB ==1 && opcion != 4)
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
          printf("\n4 Informar resultados: \n");
          printf("\n\ta) El resultado de x + y es: r");
          printf("\n\tb) El resultado de x - y es: r");
          printf("\n\tc) El resultado de x / y es: r");
          printf("\n\td) El resultado de x * y es: r");
          printf("\n\te) El factorial de x es: r");
          printf("\n\tf) El factorial de y es: r\n");
          printf("\n5 Salir");
      }
      else if (opcion == 4 && banderaOpciones < 3)
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
          printf("\n4 Informar resultados: \n");
          printf("\n\ta) El resultado de x + y es: r");
          printf("\n\tb) El resultado de x - y es: r");
          printf("\n\tc) El resultado de x / y es: r");
          printf("\n\td) El resultado de x * y es: r");
          printf("\n\te) El factorial de x es: r");
          printf("\n\tf) El factorial de y es: r\n");
          printf("\n5 Salir");
        }
        else if (opcion == 4 && banderaOpciones == 4)
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
            printf("\n4 Informar resultados: \n");
            printf("\n\ta) El resultado de %.2f + %.2f es: %.2f", primerNumero, segundoNumero, suma);
            printf("\n\tb) El resultado de %.2f - %.2f es: %.2f", primerNumero, segundoNumero, resta);
            if(segundoNumero != 0)
            {
                printf("\n\tc) El resultado de %.2f / %.2f es: %.2f", primerNumero, segundoNumero, division);
            }
            else
            {
                printf("\n\tc) No se puede dividir por 0");
            }
            printf("\n\td) El resultado de %.2f * %.2f es: %.2f", primerNumero, segundoNumero, multiplicacion);
            if(factorialA == 0)
            {
                printf("\n\te) No se puede calcular el factorial de un numero decimal o negativo");
            }
            else
            {
                printf("\n\te) El factorial de %.0f es: %.0f", primerNumero, factorialA);
            }
            if(factorialB == 0)
            {
                printf("\n\tf) No se puede calcular el factorial de un numero decimal o negativo\n");
            }
            else
            {
                printf("\n\tf) El factorial de %.0f es: %.0f\n", segundoNumero, factorialB);
            }
            printf("\n5 Salir");
        }
}

