#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main()
{
    float primerNumero;
    float segundoNumero;
    float suma;
    float resta;
    float division;
    float multiplicacion;
    double factorialA;
    double factorialB;
    int opcion;
    int banderaA;
    int banderaB;
    int validacionEnteroA;
    int validacionEnteroB;

    banderaA = 0;
    banderaB = 0;

    do
    {
      printf(":::CALCULADORA:::\n");
      printf("\n::Seleccione una opcion::\n");
      if(banderaA == 0)
      {
         printf("\n1 Ingresar el primer operando (A = x)");
      }
      else
      {
         printf("\n1 Ingresar el primer operando (A = %.2f)", primerNumero);
      }
      if(banderaB == 0)
      {
         printf("\n1 Ingresar el primer operando (B = y)");
      }
      else
      {
         printf("\n2 Ingresar el segundo operando (B = %.2f)", segundoNumero);
      }
      printf("\n3 Calcular todas las operaciones: \n");
      printf("\n    a) Sumar (%.2f + %.2f)", primerNumero, segundoNumero);
      printf("\n    b) Restar (%.2f - %.2f)", primerNumero, segundoNumero);
      printf("\n    c) Dividir (%.2f / %.2f)", primerNumero, segundoNumero);
      printf("\n    d) Multiplicar (%.2f * %.2f)", primerNumero, segundoNumero);
      printf("\n    e) Calcular factorial de %.2f y %.2f\n", primerNumero, segundoNumero);
      printf("\n4 Informar resultados:");
      printf("\n5 Salir");

      printf("\n\nIngrese una opcion: ");
      scanf("%d", &opcion);

      while(opcion > 6)
      {
          printf("Opcion ivalida. Ingrese una opcion: ");
          scanf("%d", &opcion);
      }

      switch(opcion)
      {
        case 1:
            printf("Ingrese el primer operando: ");
            scanf("%f", &primerNumero);
            banderaA = 1;
            break;

        case 2:
            printf("Ingrese el segundo operando: ");
            scanf("%f", &segundoNumero);
            banderaB = 1;
            break;

        case 3:
            printf("\nSe estan calculando sus operaciones...\n\n");
            suma = Sumar(primerNumero, segundoNumero);
            resta = Restar(primerNumero, segundoNumero);
            if(segundoNumero != 0)
            {
                division = Dividir(primerNumero, segundoNumero);
            }
            multiplicacion = Multiplicar(primerNumero, segundoNumero);

            validacionEnteroA = ValidarEntero(primerNumero);
            validacionEnteroB = ValidarEntero(segundoNumero);

            if(validacionEnteroA == 1)
            {
                factorialA = CalcularFactorial(primerNumero);
            }
            else
            {
                factorialA = 0;
            }

            if(validacionEnteroB == 1)
            {
                factorialB = CalcularFactorial(segundoNumero);
            }
            else
            {
                factorialB = 0;
            }

            printf("\n\nPrimer numero: %d", validacionEnteroA);
            printf("\nSegundo numero: %d\n\n", validacionEnteroB);

            break;

        case 4:
            printf("\n      El resultado de %.2f + %.2f es: %.2f", primerNumero, segundoNumero, suma);
            printf("\n      El resultado de %.2f - %.2f es: %.2f", primerNumero, segundoNumero, resta);
            if(segundoNumero != 0)
            {
                printf("\n      El resultado de %.2f / %.2f es: %.2f", primerNumero, segundoNumero, division);
            }
            else
            {
                printf("\n      No se puede dividir por 0");
            }
            printf("\n      El resultado de %.2f * %.2f es: %.2f", primerNumero, segundoNumero, multiplicacion);
            if(factorialA == 0)
            {
                printf("\n      No se puede calcular el factorial de un numero decimal");
            }
            else
            {
                printf("\n      El factorial de %.0f es: %.0f", primerNumero, factorialA);
            }
            if(factorialB == 0)
            {
                printf("\n      No se puede calcular el factorial de un numero decimal\n\n");
            }
            else
            {
                printf("\n      El factorial de %.0f es: %.0f\n\n", segundoNumero, factorialB);
            }
            break;

        case 5:
            printf("\nGracias por utilizar la calculadora!\n\n");
            break;
      }

    } while(opcion != 5);


    return 0;
}
