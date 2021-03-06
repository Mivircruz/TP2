#ifndef VUELOS_H
#define VUELOS_H

#define POS_NUMERO_VUELO		0
#define POS_PRIORIDAD_VUELO		5
#define POS_FECHA_VUELO			6


//Compara las claves 1 y 2. 
//Devuelve -1 en caso de que la clave 1 sea menor que la clave 2, 1 en caso contrario.
int comparar_claves_abb(const char* clave1, const char* clave2);

//Compara las fechas inicio y fin. 
//Devuelve -1 en caso de que la fecha de inicio sea menor que la de fin, 1 en caso contrario.
//En caso de ser iguales, devuelve 0.
int comparar_fechas(const char* fecha_inicio, const char* fecha_fin);

//Si la cantidad de vuelos a imprimir es un número entero mayor a cero, devuelve true.
//Devuelve false en caso contrario.
bool cantidad_vuelos_valida(char* linea, long int* vuelos);

//La función comparar_prioridades devuelve:
//1 si la primera prioridad es mayor a la segunda.
//-1 si la primera prioridad es menor a la segunda.
//0 en caso de ser iguales.
int comparar_prioridades(const void* a, const void* b);

//Devuelve un arreglo que contiene la fecha y la clave del vuelo.
char** fecha_y_clave(const char* fecha, char* vuelo);

//Devuelve un arreglo que contiene la prioridad y la clave del vuelo
char** prioridad_y_clave(char* linea);

//Destruye un arreglo que contiene la fecha y la clave del vuelo.
void destruir_fecha_y_clave(char*** datos_vuelos, size_t cantidad);

//Intercambia dos arreglos de cadenas que contienen información sobre los vuelos.
void swap_datos_vuelo(char*** x, char*** y);

#endif