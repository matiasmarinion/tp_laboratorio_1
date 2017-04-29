#include <stdio.h>
#include "funciones.h"



int obtenerEspacioLibre(epersona lista[],int cantidad_elementos,int valor){
    int i;
    for(i=1;i <= cantidad_elementos+1; i++)
    {
        if(lista[i].estado == valor)
        {
            break;
        }
        if(i == cantidad_elementos)
        {
            printf("lista llena\n\n");
            break;
        }
    }
    return i;

    }

    int buscarPorDni(epersona lista[], int dni)
    {
        int i,auxDni;

        for(i=0;i<20;i++)
        {
            if(lista[i].dni == dni)
            {
                return i;
                break;
            }
        }
        return 0;
    }

int validarNumero(char str[])
{
    int i=0;

    while(str[i]!='\0'){
        if(str[i]<'\0'||str[i]>'9')
        {
            return 0;
        }
    i++;
    }
    return 1;
}

int validarCaracter(char str[])
{
    int i=0;

    while(str[i]!='\0'){
        if((str[i]<'a'||str[i]>'z')&&(str[i]!=' ')&&(str[i]<'A'||str[i]>'Z'))
        {
            return 0;
        }
    i++;
    }
    return 1;
}

int validarAlfaNumerico(char str[]){
    int i=0;

    while(str[i]!='\0'){
        if((str[i]<'a'||str[i]>'z')&&(str[i]!=' ')&&(str[i]<'A'||str[i]>'Z')&&(str[i]<'0'||str[i]>'100')){
            return 0;
        }
        i++;
    }
    return 1;
}

void getString(char mensaje[],char input[])
{
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%s",input);
}

int getStringLetras(char mensaje[],char input[])
{
    char aux[256];
    getString(mensaje,aux);
    if(validarCaracter(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}

int getStringNumeros(char mensaje[],char input[])
{
    char aux[256];
    getString(mensaje,aux);
    if(validarNumero(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}

void ordenarPorNombre(epersona lista[])
{
    epersona listaAux;
    int i,j,k;

    for(i=0;i<20-1;i++)
    {
        for(j=i+1;j<20;j++)
        {
            k=strcmp(lista[i].nombre,lista[j].nombre);

            if(k>0)
            {
                listaAux = lista[i];
                lista[i] = lista[j];
                lista[j] = listaAux;
            }
        }
    }

    for(i=0;i<20;i++)
    {
        if(lista[i].estado == 1)
        {
            printf("%s\t%i\t%1i\n", lista[i].nombre,lista[i].edad,lista[i].dni);
        }
    }

    printf("\n");
}
