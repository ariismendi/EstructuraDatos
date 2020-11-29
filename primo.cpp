//indicar si un numero es primo o no
#include <stdio.h>
//#include <math.h>
//#include <iostream>
//using namespace std;

int main(){
    int number;
    int remainders = 0;

    printf("Escriba un numero entero para saber si es primo\n");
    scanf("%i", &number);

    if(number == 1){
        printf("Ni primo ni compuesto mi rey");

    }

    else {
    for(int i = 2; i < number; i++){
        if (number % i == 0){
            remainders ++;
        }

        else {
            continue;
        }

    }
        if (remainders == 0){
            printf("Es primo");
        }
        else{
            printf("No es primou");
        }
    }

    return 0;
}
