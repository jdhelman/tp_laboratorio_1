
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
 *
 */
int ValidarEnteroPositivo(float numero);

/** \brief Muestra un menu con las opciones disponibles al usuario al momento de ejecutar la calculadora
 * \return void El menu a invocar generado implicitamente
 */
void Menu1();

/** \brief Muestra un menu con las opciones disponibles al usuario despues de haber ingresado el primer operado
 * \param float El primer operando que ingreso el usuario
 * \return void El menu a invocado
 */
void Menu2(float );

/** \brief Muestra un menu con las opciones disponibles al usuario despues de haber ingresado dos operandos
 * \param float El primer operando que ingreso el usuario
 * \param float El segundo operando que ingreso el usuario
 * \return void El menu a invocado
 */
void Menu3(float, float);

/** \brief Muestra una parte del menu de la calculadora hasta que se pida mostrar los resultados
 * \return void El menu a invocar generado implicitamente
 */
void Menu4();



