#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main()
{
    int primerNumero;
    int segundoNumero;
    int suma;
    int resta;
    float division;
    int multiplicacion;
    int factorialA;
    int factorialB;
    int opcion;

    do
    {
      printf("\n:::CALCULADORA:::\n");
      printf("\n      - Ingrese el primer operando: ");
      scanf("%d", &primerNumero);
      printf("\n      - Ingrese el segundo operando: ");
      scanf("%d", &segundoNumero);
      printf("\n::Seleccione una opcion::\n");
      printf("\n1 Sumar (%d + %d)", primerNumero, segundoNumero);
      printf("\n2 Restar (%d - %d)", primerNumero, segundoNumero);
      printf("\n3 Dividir (%d / %d)", primerNumero, segundoNumero);
      printf("\n4 Multiplicar (%d * %d)", primerNumero, segundoNumero);
      printf("\n5 Calcular factorial de %d y %d", primerNumero, segundoNumero);
      printf("\n6 Salir");

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
            suma = Sumar(primerNumero, segundoNumero);
            printf("\n      El resultado de %d + %d es: %d\n", primerNumero, segundoNumero, suma);
            break;

        case 2:
            resta = Restar(primerNumero, segundoNumero);
            printf("\n      El resultado de %d - %d es: %d\n", primerNumero, segundoNumero, resta);
            break;

        case 3:
            if(segundoNumero != 0)
            {
                division = Dividir(primerNumero, segundoNumero);
                printf("\n      El resultado de %d / %d es: %.2f\n", primerNumero, segundoNumero, division);
            }
            else
            {
                printf("\n      No se puede dividir por 0\n");
            }
            break;

        case 4:
            multiplicacion = Multiplicar(primerNumero, segundoNumero);
            printf("\n      El resultado de %d * %d es: %d\n", primerNumero, segundoNumero, multiplicacion);
            break;

        case 5:
            if(primerNumero < 13)
            {
                factorialA = CalcularFactorial(primerNumero);
                printf("\n      El factorial de %d es: %d", primerNumero, factorialA);

            }
            else
            {
                printf("\n      No puedo calcular el factorial de %d, es demasiado grande\n", primerNumero);
            }
            if(segundoNumero < 13)
            {
                factorialB = CalcularFactorial(segundoNumero);
                printf("\n      El factorial de %d es: %d\n", segundoNumero, factorialB);
            }
            else
            {
                printf("\n      No puedo calcular el factorial de %d, es demasiado grande\n", segundoNumero);
            }
            break;

        case 6:
            printf("\nGracias por utilizar la calculadora!\n\n");
            break;
      }

    } while(opcion != 6);

    return 0;
}

