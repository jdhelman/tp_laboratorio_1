#ifndef EMPLEADOS_H_INCLUDED
#define EMPLEADOS_H_INCLUDED

typedef struct{
    int idEmpleado;
    char nombre[51];
    char apellido[51];
    float sueldo;
    int sector;
    int estaVacio;

}eEmpleado;

/** \brief Inicializa el array de empleados de la estructura eEmpleados
 *
 * \param listado[] eEmpleado el dato a inicializar
 * \param tam int cantidad de elementos del array
 * \return int -1 si no se pudo inicializar y 0 si se pudo
 */
int inicializarListadoEmpleados(eEmpleado listado[],int tam);

/** \brief Busca el primer indice libre de un array
 *
 * \param listado[] eEmpleado el array a analizar
 * \param tam int la cantidad de elementos del array
 * \return int el primer indice si hay libres o -1 si no hay libres
 */
int buscarPrimerLugarEmpleados(eEmpleado listado[], int tam);

/** \brief Carga datos en la estructura de empleados
 *
 * \return eEmpleado los datos almacenados
 */
eEmpleado cargarEmpleado();

/** \brief Carga datos en un array de la estructura de empleados asignndole un ID y contando la cantidad ingresada
 *
 * \param listado[] eEmpleado el array a cargar
 * \param contadorEmpleado int la cantidad de empleados ingresados
 * \param idEmpleado int el id de empleado a generar
 * \param tam int la cantidad de elementos del array
 * \return int el id de empleado generado
 */
int cargarListadoDeEmpleados(eEmpleado listado[], int contadorEmpleado, int idEmpleado, int tam);

/** \brief muestra un elemento de la estructura eEmpleado
 *
 * \param empleado eEmpleado la estructura a mostrar
 * \return void muestra los datos almacenados
 */
void mostrarUnEmpleado(eEmpleado empleado);

/** \brief muestra un array de la estructura eEmpleado
 *
 * \param listadoEmpleados[] eEmpleado array de la estructura a mostrar
 * \param tam int cantidad de elementos
 * \return void muestra los datos almacenados
 */
void mostrarListadoEmpleados(eEmpleado listadoEmpleados[], int tam);

/** \brief permite eliminar un dato almacenado en un array modificando el valor de una variable
 *         asociada al id de un empleado
 * \param listado[] eEmpleado el array de empleados
 * \param contadorEmpleado int el valor a buscar para eliminar
 * \param tam int cantidad de elementos del array
 * \return int 0 si pudo eliminarse o -2 si no se encuentra el id
 */
int eliminarEmpleado(eEmpleado listado[], int contadorEmpleado, int tam);

/** \brief permite modificar un dato almacenado en un array modificando el valor las variables
 *         asociadas al id de un empleado
 * \param listado[] eEmpleado el array de empleados
 * \param contadorEmpleado int el valor a buscar para modificar
 * \param tam int cantidad de elementos del array
 * \return int 0 si pudo modificarse o -2 si no se encuentra el id
 */
int modificarEmpleado(eEmpleado listado[], int contadorEmpleado, int tam);

/** \brief ordena el array de empleados por apellido y por sector
 *
 * \param listado[] eEmpleado el array de empleados
 * \param tam int cantidad de elementos del array
 * \return void el listado ordenado
 */
void ordenarEmpleadosPorApellido(eEmpleado listado[], int tam);

/** \brief Busca y acumula los sueldos de un array de empleados
 *
 * \param listado[] eEmpleado  el array de empleados
 * \param tam int cantidad de elementos del array
 * \return float los sueldos acumulados
 */
float acumularSueldos(eEmpleado listado[], int tam);

/** \brief Cuenta la cantidad de empleados cargados en un array de empleados
 *
 * \param listado[] eEmpleado  el array de empleados
 * \param tam int cantidad de elementos del array
 * \return int la cantidad de empleados encontrados
 */
int contarEmpleados(eEmpleado listado[], int tam);

/** \brief Calcula el promedio de sueldos
 *
 * \param cantidadEmpleados int cantidad de empleados
 * \param sumatoriaSueldos float sueldo acumulado
 * \return float el promedio de sueldos
 */
float promediarSueldos(int cantidadEmpleados, float sumatoriaSueldos);

/** \brief Muestra la cantidad de empleados que tiene un sueldo superior al promedio
 *
 * \param promedioSueldos float el promedio de sueldos
 * \param listado[] eEmpleado el array de empleados
 * \param tam int cantidad de elementos del array
 * \return int la cantida encontrada
 *
 */
int contarSueldosMasAltos(float promedioSueldos, eEmpleado listado[], int tam);

#endif // EMPLEADOS_H_INCLUDED
