//Buscar los posibles divisores de un numero, ejemplo: de 8 los divisores son 1,2,4,8
#include <stdio.h>
#include <stdlib.h>

int main(){

int number;

printf("Ingrese el número al que se le calcularán sus divisores:\n");
scanf("%i", &number);

printf("Los divisores son: \n ");


for(int i = 1; i <= number; i++){

    if (number%i == 0){
        printf("%i \n", i);
    }

/*
    if (number%i == 0){
        printf("%i", number);
    }
    else {
        continue;
    }

*/

}

return 0;
}
