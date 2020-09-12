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
        MenuCalculadora(primerNumero, segundoNumero, banderaA, banderaB, opcion, banderaOpciones, suma, resta, division, multiplicacion, factorialA, factorialB);

        if(banderaOpciones == 4)
        {
            printf("\n\nQuiere realizar otra operacion? Responda con s o n: ");
            fflush(stdin);
            scanf("%c", &preguntaFinal);
            printf("\n");
            while(preguntaFinal != 's' && preguntaFinal != 'n')
            {
                printf("\nError. Responda con s o n: ");
                fflush(stdin);
                scanf("%c", &preguntaFinal);
                printf("\n");
            }
            if(preguntaFinal == 's')
            {   banderaOpciones = 0;
                banderaA = 0;
                banderaB = 0;
                MenuCalculadora(primerNumero, segundoNumero, banderaA, banderaB, opcion, banderaOpciones, suma, resta, division, multiplicacion, factorialA, factorialB);
            }
            else
            {
                opcion = 5;
            }
        }

        if(opcion != 5)
        {
            printf("\n\nIngrese una opcion: ");
            scanf("%d", &opcion);
            while(opcion > 6 || opcion < 1)
                {
                    printf("\nOpcion ivalida. Ingrese una opcion: ");
                    scanf("%d", &opcion);
                }
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
                if(banderaOpciones < 3)
                {
                    printf("Error, primero debe ingresar los operandos y calcularlos\n");
                }
               else
                {
                    banderaOpciones = 4;
                }
                printf("\n");
                break;

        case 5:
                break;
        }

    } while(opcion != 5);

    return 0;
}
