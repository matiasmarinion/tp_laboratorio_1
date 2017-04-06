#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int suma(int A,int B);
int resta(int A,int B);
int divicion(int A,int B);
int multiplicacion(int A,int B);
int factorial(int );



int main()
{
    char seguir='s';
    int opcion=0;
    float x,y,z,valor,result;


    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        printf("elija una opcion: ");
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                break;
            case 2:
                break;
            case 3:
                printf("ingrese numero a sumar: ");
                scanf("%f",&x);
                printf("ingrese numero a sumar: ");
                scanf("%f",&y);
                z=suma(x,y);
                printf("la suma es %f",z);
                break;
            case 4:
                printf("ingrese numero a restar: ");
                scanf("%f",&x);
                printf("ingrese numero a restar: ");
                scanf("%f",&y);
                z=resta(x,y);
                printf("la resta es %f",z);
                break;
            case 5:
                printf("ingrese numero a dividir: ");
                scanf("%f",&x);
                printf("ingrese numero a dividir: ");
                scanf("%f",&y);
                z=divicion(x,y);
                printf("la divicion es %f",z);
                break;
            case 6:
                printf("ingrese numero a multiplicar: ");
                scanf("%f",&x);
                printf("ingrese numero a multiplicar: ");
                scanf("%f",&y);
                z=multiplicacion(x,y);
                printf("la multiplicacion es %f",z);
                break;
            case 7:
                printf("ingrese numero: ");
                scanf("%f",&valor);
                result=factorial(valor);
                printf("el factorial de %f es %f",valor,result);
                break;
            case 8:
                printf("ingrese un numero: ");
                scanf("%f",&x);
                printf("ingrese otro numero: ");
                scanf("%f",&y);
                printf("la suma de %f y %f es %f",x,y,x+y);
                printf("la resta de %f y %f es %f",x,y,x-y);
                printf("la divicion de %f y %f es %f",x,y,x/y);
                printf("la multiplicacion de %f y %f es %f",x,y,x*y);
                break;
            case 9:
                seguir = 'n';
                break;

        }



        }


    return 0;
}

int suma(int A,int B){
    int total;
    total=A+B;
    return total;

}
int resta(int A,int B){
    int total;
    total=A-B;
    return total;

}
int divicion(int A,int B){
    int total;
    total=A/B;
    return total;

}
int multiplicacion(int A,int B){
    int total;
    total=A*B;
    return total;
}
int factorial(int A){
    int resp;
    if(A==1)
        return 1;
    resp=A* factorial(A-1);
    return(resp);

}





