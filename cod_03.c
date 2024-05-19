#include<stdio.h>

//Declaracion de la funcion negativo
int negativo(int numero);

void main() {
    //Declaracion de las variables del programa
    int n,resultado;
    printf("Introduzca un número:\n");
    scanf("%d",&n);
    //Llamada a la funcion para verificar si el numero ingresado es negativo o positivo
    resultado=negativo(n);
    //En caso de que el resultado de la funcion negativo sea 1 esto indica que el numero es negativo
    if (resultado==1)
        printf("Es un número negativo.\n");
    //En caso de que el resultado de la funcion negativo sea 0 esto indica que el numero No es negativo
    else
    printf("No es negativo.\n");
}

int negativo(int numero) {
    int res;
    if (numero<0)
        res=1;
    else
        res=0;
    return(res);
}