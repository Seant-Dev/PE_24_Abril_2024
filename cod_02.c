#include<stdio.h>

//Declaracion de la funcion media para tres numeros
float media3(float n1,float n2,float n3);
int main() {
    //Declaracion de las varaibles del programa
    float n1, n2, n3,result;
    printf("Introduzca un número real:\n");
    scanf("%f",&n1);
    printf("Introduzca otro número real:\n");
    scanf("%f",&n2);
    printf("Introduzca otro número real:\n");
    scanf("%f",&n3);
    //Llamada a la funcion media3 para calcular la media de 3 numeros y asignar su valor a la variable result
    result=media3(n1,n2,n3);
    printf("La media es:%f\n",result);
    return 0;
}

//Definicion de la funcion media 3
float media3(float n1, float n2, float n3) {
    float resultado;
    resultado=(n1+n2+n3)/3;
    return (resultado);
}