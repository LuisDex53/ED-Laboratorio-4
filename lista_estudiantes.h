/**********************************************************************
    Instituto Tecnológico de Costa Rica
    Estructuras de Datos IC-2001
    II Semestre 2019
    Profesora: Samanta Ramijan Carmiol
    Ejemplos Prácticos: Lista de Estudiantes
    Estudiante: Luis Diego Solorzano Maroto 2019042851
**********************************************************************/
//Definición de Macros
#define LONGITUD_MAXIMA_NOMBRE 50 
#define LONGITUD_MAXIMA_CARNET 12

//Definición de Estructuras
typedef struct nodo_estudiante
{
	int carnet;
	char *nombre;

	struct nodo_estudiante *ref_siguiente;
}nodo_estudiante;

typedef struct lista_estudiantes
{
	nodo_estudiante *ref_inicio;
	int cantidad;
}lista_estudiantes;

//Definición de Funciones
/*-----------------------------------------------------------------------
	crear_nodo
	Entradas: No recibe parámetros
	Salidas: Retorna un puntero de tipo nodo_estudiante al nodo creado
	Funcionamiento: 
		- Solicita al usuario ingresar Nombre y Carnet.
		- Crea un puntero de tipo nodo_estudiante
		- Le asigna al nodo el nombre y carnet ingresados.
		- El nodo apunta a NULL.
		- retorna el puntero al nuevo nodo.
-----------------------------------------------------------------------*/
nodo_estudiante* crear_nodo();
/*-----------------------------------------------------------------------
	inicializar_lista
	Entradas: No recibe parametros
	Salidas: No retorna nada
	Funcionamiento: Esta funcion reserva memoria para el puntero, ademas de que el puntero empiza
	apuntando a null
-----------------------------------------------------------------------*/
void inicializar_lista();
/*-----------------------------------------------------------------------
	insertar_inicio
	Entradas: Recibe al estudiante que se desea agregar (puntero estudiante)
	Salidas: No retorna nada
	Funcionamiento: 
	Se crea la lista en caso de que el puntero este en null, si no, la empieza y
	cambia al puntero para que apunte a la siguiente posicion e indica que esta sera el inicio 
	de la lista para colocar al estudiante ahi

-----------------------------------------------------------------------*/
void insertar_inicio(nodo_estudiante* nuevo);
/*-----------------------------------------------------------------------
	insertar_final
	Entradas: Recibe al estudiante (puntero estudiante)
	Salidas: No retorna nada
	Funcionamiento: 
	Se crea la lista en caso de que el puntero este en null, si no, la empieza
	Si es 0, se llama a la funcion agregar inicio para que el nuevo estudiante este de primero
	Se reserva mememoria para el puntero temporal para que éste apunte al principio de la lista
-----------------------------------------------------------------------*/
void insertar_final(nodo_estudiante* nuevo);
/*-----------------------------------------------------------------------
	borrar_por_indice
	Entradas: Recibe un int
	Salidas: Retorna la lista
	Funcionamiento: 
	Se crea un puntero (nodo_estudianrte) y se crea un contador
	Se valida si el indice se encuentra en las posiciones de la lista y si el indice es 0
	pasa al siguiente elemento para hacer que este sea el inicio de la lista
	Si el contador iguala al indice, el inicio de la lista pasa a ser el siguiente elemento y
	elemina al anterior
-----------------------------------------------------------------------*/
void borrar_por_indice(int indice);
 /*-----------------------------------------------------------------------
	buscar_por_indice
	Entradas: 
	Salidas: 
	Funcionamiento: 
	Se crea un puntero (nodo_estudiante)
	Se verifica que el puntero este en las posiciones de la lista y crea un contador
	Se retorna el siguiente elemento de la lista siempre que la lista no sea null
-----------------------------------------------------------------------*/
nodo_estudiante* buscar_por_indice(int indice);

 /*-----------------------------------------------------------------------
	validar_carnets
	Entradas: No recibe ningun parametro
	Salidas: No retorna nada
	Funcionamiento: 
	Se verifica si el estudiante encontrado (si se encuentra) tiene el
	mismo carnet que el introducido
-----------------------------------------------------------------------*/
void validar_carnets(int carnet_almacenado, int carnet_ingresado);
 /*-----------------------------------------------------------------------
	menu
	Entradas: No recibe ningun parametro
	Salidas: No retorna nada
	Funcionamiento: 
	Muestra las opciones disponibles para el usuario y reacciona
	con forme a la opcion seleccionada por el usuario
-----------------------------------------------------------------------*/
void menu();
 /*-----------------------------------------------------------------------
	main
	Entradas: No recibe parametros
	Salidas: Retorna un numero entero
	Funcionamiento: 
	Se llama a menu para que sea mostrado al inicio del programa
-----------------------------------------------------------------------*/
int main();
 /*-----------------------------------------------------------------------
	get_user_input
	Entradas: Recibe una cadena de caracteres
	Salidas: Retorna un buffer
	Funcionamiento: 
	Se optimiza el programa haciendo un buffer con los datos introducidos
-----------------------------------------------------------------------*/
char* get_user_input(size_t max_size);
 /*-----------------------------------------------------------------------
	get_user_numerical_input
	Entradas: Recibe un numero entero
	Salidas: Retorna un buffer
	Funcionamiento: 
	Se optimiza el programa haciendo un buffer con los enteros introducidos
-----------------------------------------------------------------------*/
int get_user_numerical_input(size_t max_size);