#include <stdio.h>
#include <stdlib.h>

int numberOne, numberTwo, numberThree;


int main(){

printf("Ingrese Tres números para comparar cuál es el mayor\n");
printf("Escriba el primer número:\n");
scanf("%i", &numberOne);

printf("Escriba el segundo número: \n");
scanf("%i", &numberTwo);

printf("Escriba el tercer número: \n");
scanf("%i", &numberThree);

    if ( (numberOne >= numberThree) && (numberOne >= numberTwo) ){
        printf("El número mayor es: %i", numberOne);
    }
    else if ( (numberTwo >= numberThree) && (numberTwo >= numberOne) ){
        printf(" El número mayor es: %i", numberTwo);
    }
    else {
        printf("El número mayor es %i", numberThree);
    }


return 0;
}
