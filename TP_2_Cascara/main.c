#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define CANT_P 20


int main()
{
    epersona persona[CANT_P];

    int i,estadoLibre,opcionInt=0,indiceDni;
    char auxNombre[30],confirma[20],opcionChar[20],auxEdad[10],auxDni[20];
    int hasta18=3, de19a35=5, mayorDe35=7, flag=0, mayor, auxDni2;
    char seguir='s';
    int opcion=0;

    for(i=0;i<20;i++)
    {
        persona[i].estado = -1;
        persona[i].nombre[0] = '\0';
        persona[i].edad = '\0';
        persona[i].dni = '\0';
    }

    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%s",opcionChar);
        while(!validarNumero(opcionChar))
        {
            printf("solo se permite numeros.Por favor reingrese\n");
            scanf("%s",opcionChar);
        }
        opcionInt = atoi(opcionChar);

        switch(opcionInt)
        {
            case 1:
                estadoLibre=obtenerEspacioLibre(persona,CANT_P,-1);
                if(estadoLibre == 0)
                {
                    printf("error no hay espacios libres\n");
                    break;
                }

                printf("AGREGAR PERSONA\n");
                if(!getStringLetras("ingrese el nombre: ",auxNombre))
                {
                    printf("el nombre debe estar compuesto solo por letras\n");
                    printf("\n\n");
                    break;
                }

                if(!getStringNumeros("ingrese la edad: ",auxEdad))
                {
                    printf("la edad debe ser numerica\n");
                    printf("\n\n");
                    break;
                }

                if(!getStringNumeros("ingrese el DNI: ",auxDni))
                {
                    printf("el DNI deberia ser numerico\n");
                    printf("\n\n");
                    break;
                }
                strcpy(persona[estadoLibre].nombre,auxNombre);
                persona[estadoLibre].edad = atoi(auxEdad);
                persona[estadoLibre].dni = atoi(auxDni);
                persona[estadoLibre].estado = 1;
                printf("\n\n\n");

                break;

            case 2:

                if(!getStringNumeros("ingrese el dni para dar de baja: ",auxDni))
                {
                    printf("el DNI debe ser numerico\n");
                    break;
                }
                auxDni2 = atoi(auxDni);
                indiceDni = buscarPorDni(persona,auxDni2);
                if(indiceDni == 0)
                {
                    printf("\n\nNo se encuentra ese DNI\n");
                    printf("\n\n");
                    break;
                }

                persona[indiceDni].nombre[0] = '\0';
                persona[indiceDni].edad = '\0';
                persona[indiceDni].dni = '\0';
                persona[indiceDni].estado = -1;
                system("cls");
                break;
            case 3:
                ordenarPorNombre(persona);
                break;
            case 4:

                break;
            case 5:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
















