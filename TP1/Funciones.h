
/** \brief Calcula la suma de dos numeros enteros
 * \param primerNumero float El primer operando
 * \param segundoNumero float El segundo operando
 * \return float La suma entre ambos numeros
 */
float Sumar(float primerNumero, float segundoNumero);

/** \brief Calcula la resta entre dos numeros enteros
 * \param primerNumero float El primer operando
 * \param segundoNumero float float El segundo operando
 * \return float La resta entre los numeros
 */
float Restar(float primerNumero, float segundoNumero);

/** \brief Calcula la division entre dos numeros enteros
 * \param primerNumero float El primer operando
 * \param segundoNumero float El segundo operando
 * \return float La division entre los numeros
 */
float Dividir(float primerNumero, float segundoNumero);

/** \brief Calcula la multiplicacion entre dos numeros enteros
 * \param primerNumero int El primer operando
 * \param segundoNumero int El segundo operando
 * \return int La multiplicacion entre los numeros
 */
float Multiplicar(float primerNumero, float segundoNumero);

/** \brief Calcula el factorial de un numero entero positivo
 * \param  double El numero a ser factorizado
 * \return double Factorial del numero
 */
double CalcularFactorial(double numero);

/** \brief Valida si un numero es entero positivo
 * \param  int El numero a ser validado
 * \return int El resultado de la validacion: 1 verdadero, 0 falso
 */
int ValidarEnteroPositivo(float numero);

/** \brief Muestra un menu con las opciones disponibles al momento de ejecutar la calculadora
 * \       que dependera de lo que seleccione el usuario para que vaya cambiando entre un menu u otro
 * \param primerNumero float El primer operando que ingresara el usuario
 * \param segundoNumero float El segundo operando que ingresara el usuario
 * \param banderaA int es la bandera para indicar que el usuario ingreso el primer operando
 * \param banderaB int es la bandera para indicar que el usuario ingreso el segundo operando
 * \param opcion int es la opcion que ingreso el usuario que puede variar entre 1 y 5
 * \param banderaOpciones int es la bandera para indicar en cual opcion ingreso el usuario para mantener un flujo
 * \param suma float es el resultado de la suma entre los operandos
 * \param resta float es el resultado de la resta entre los operandos
 * \param division float es el resultado de la division entre los operandos
 * \param multiplicacion float es el resultado de la multiplicacion entre los operandos
 * \param factorialA double es el resultado del factorial del primer operando
 * \param factorialB double es el resultado del factorial del segundo operando
 * \return void El menu a invocado segun la instancia que de la operacion de la calculadora
 *
 */
void MenuCalculadora(float, float, int, int, int, int, float, float, float, float, double, double);






