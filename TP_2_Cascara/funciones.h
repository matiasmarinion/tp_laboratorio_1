#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct{
    char nombre[20];
    int edad;
    int estado;
    int dni;

}epersona;



/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(epersona lista[],int cantidad_elementos,int valor);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(epersona lista[], int dni);

void graficoDeEdades(epersona persona[],int);
void ordenarPorNombre(epersona persona[]);




#endif // FUNCIONES_H_INCLUDED
