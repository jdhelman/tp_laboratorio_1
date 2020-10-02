#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/** \brief Muestra un menu donde el usuario elegira una opcion
 *
 * \return void el menu
 */
void menuPrincipal();

/** \brief Muestra un submenu donde el usuario elegira una opcion para modificar datos
 *
 * \return void el submenu
 */
void menuModificar();

/** \brief Muestra un submenu donde el usuario elegira una opcion para mostrar datos
 *
 * \return void el submenu
 */
void menuMostrar();

/** \brief Solicita un número entero y devuelve el resultado
 *
 * \param char cadena de texto con el mensaje a ser mostrado
 * \return El número ingresado por el usuario
 */
int pedirNumero(char mensaje[]);

/** \brief Solicita un número flotante y devuelve el resultado
 *
 * \param char cadena de texto con el mensaje a ser mostrado
 * \return El número ingresado por el usuario
 */
float pedirFlotante(char mensaje[]);

/** \brief Convierte el primer caracter de una cadena de texto en mayuscula y el resto en minuscula
 *
 * \param dato[] char la cadena a convertir
 * \return void el dato convertido
 */
void primeraLetraMayus(char dato[]);

/** \brief Permite almacenar una cadena texto en una variable
 *
 * \param mensaje[] char el mensaje inicial
 * \param input[] char la cadena a ingresar
 * \return void el dato almacenado
 */
void pedirCadenaSimple(char mensaje[], char input[]);

/** \brief Permite almacenar una cadena texto de una determinada extension en una variable
        mostrando un mensaje inicial y uno de error si se excede la extension establecida
 *
 * \param mensaje[] char el mensaje inicial
 * \param mensajeError[] char el mensaje de error
 * \param dato[] char la cadena a ingresar
 * \param tam int extension de los caracteres del dato ingresado
 * \return void el dato almacenado
 */
void pedirCadenaConExtension(char mensaje[], char mensajeError[], char dato[], int tam);

/** \brief limpia la pantalla
 *
 * \return void
 */
void limpiarPantalla();

#endif // FUNCIONES_H_INCLUDED
