#include "funciones.h"

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
