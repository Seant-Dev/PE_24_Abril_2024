#include <stdio.h>

//Declaracion de la funcion para comparar
int comparar(int num);

void main()
{
    //Declaracion de las variables del proggrama
    int numero,opcion,i,lim;
    i=0;
    printf("Ingresa el limite de valores a comparar: ");
    scanf("%d",&lim);

    //Ciclo que repite el proceso el numero de veces que se haya ingresado en la variable lim
    while(i<lim)
    {
        printf ("\nIngresa el valor a comparar: ");
        scanf("%d",&numero);

        //Llamada a la funcion para comparar
        opcion=comparar(numero);
        if(opcion==0)
            printf("El valor ingresado es par\n");
        else
            printf("El valor ingresado es impar\n");
        i=i+1;
    }
}

//Funcion para comparar si un numero es par o impar
int comparar(int num)
{
    int temp;
    //En caso de que el modulo de num/2 sea 0 significa que el numero es par.
    temp = num%2;
    return (temp);
}