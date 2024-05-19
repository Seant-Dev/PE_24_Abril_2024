#include<stdio.h>

//Declaracion de la funcion para calcular la media de 2 numeros
float media2(float n1, float n2);

void main(){
    //Declaracion de las variables del programa
    float n1, n2, resultado;
    printf("Introduzca un número real:\n");
    scanf("%f",&n1);
    printf("Introduzca otro número real:\n");
    scanf("%f",&n2);
    
    //Llamada a la funcion para calcular la media de dos numeros
    resultado=media2(n1,n2);
    printf("La media es: %f.\n",resultado);
}

float media2(float n1, float n2){
    float resultado;
    resultado=(n1+n2)/2;
    return(resultado);
}