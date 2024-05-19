#include<stdio.h>

//Definicion de las dos funciones que se usaran en el programa
int pedir();
int triple(int);

int main() {
    int numero, total;

    //Llamada a la funcion para pedir el numero
    numero = pedir();

    //Llamada a la funcion para calcular el triple del numero solicitado por la funcion pedir
    total = triple(numero);
    printf("El triple de %i es: %i\n",numero, total);
    return 0;
}

//Funcion que solo pide al usuario que ingrese un numero
int pedir(){
    int n;
    printf("Introduzca un número entero:\n");
    scanf("%d",&n);
    return (n);
}

//Funcion que calcula el triple del numero ingresado
int triple(int num){
    int n;
    n = 3*num;
    return(n);
}