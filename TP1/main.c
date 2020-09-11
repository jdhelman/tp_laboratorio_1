#include <stdio.h>
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
    int banderaOpciones;
    int validacionEnteroPositivoA;
    int validacionEnteroPositivoB;
    char preguntaFinal;

    banderaA = 0;
    banderaB = 0;
    banderaOpciones = 0;

    do
    {
      if(banderaA == 0)
      {
         Menu1();

      }
      else if(banderaB == 0)
      {
          Menu2(primerNumero);
          Menu4();
      }
      else
      {
          Menu3(primerNumero, segundoNumero);
          Menu4();
      }

      printf("\n\nIngrese una opcion: ");
      scanf("%d", &opcion);

      while(opcion > 6 || opcion < 1)
      {
          printf("\nOpcion ivalida. Ingrese una opcion: ");
          scanf("%d", &opcion);
      }

      switch(opcion)
      {
        case 1:
            printf("Ingrese el primer operando: ");
            scanf("%f", &primerNumero);
            printf("\n");
            validacionEnteroPositivoA = ValidarEnteroPositivo(primerNumero);
            banderaOpciones = 1;
            banderaA = 1;
            break;

        case 2:
            if(banderaOpciones == 0)
            {
                printf("Error, primero debe ingresar el primer operando.\n\n");
            }
            else
            {
                printf("Ingrese el segundo operando: ");
                scanf("%f", &segundoNumero);
                printf("\n");
                validacionEnteroPositivoB = ValidarEnteroPositivo(segundoNumero);
                banderaB = 1;
                banderaOpciones = 2;
            }
            break;

        case 3:

            if(banderaOpciones < 2)
            {
                printf("Error, primero debe ingresar los operandos.\n\n");
            }
            else
            {
                printf("Se calcularon las operaciones...\n\n");
                suma = Sumar(primerNumero, segundoNumero);
                resta = Restar(primerNumero, segundoNumero);
                if(segundoNumero != 0)
                {
                    division = Dividir(primerNumero, segundoNumero);
                }
                multiplicacion = Multiplicar(primerNumero, segundoNumero);

                if(validacionEnteroPositivoA == 1)
                {
                    factorialA = CalcularFactorial(primerNumero);
                }
                else
                {
                    factorialA = 0;
                }

                if(validacionEnteroPositivoB == 1)
                {
                    factorialB = CalcularFactorial(segundoNumero);
                }
                else
                {
                    factorialB = 0;
                }
                banderaOpciones = 3;
            }

            break;

        case 4:
            printf("\n");
            Menu3(primerNumero, segundoNumero);
            printf("\n4 Informar resultados: \n");
            if(banderaOpciones < 3)
            {
                printf("Error, primero debe ingresar los operandos y calcularlos\n\n");
            }
            else if (banderaOpciones == 3)
            {
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
                printf("\n\nQuiere realizar otra operacion? Responda con s o n: ");
                fflush(stdin);
                scanf("%c", &preguntaFinal);
                while(preguntaFinal != 's' && preguntaFinal != 'n')
                {
                    printf("\nError. Responda con s o n: ");
                    fflush(stdin);
                    scanf("%c", &preguntaFinal);
                }
                if(preguntaFinal == 's')
                {
                    banderaOpciones = 0;
                    banderaA = 0;
                    banderaB = 0;
                    printf("\n");
                }
                else
                {
                    opcion = 5;
                }
            }
            break;

        case 5:
            break;
      }
    } while(opcion != 5);

    return 0;
}
