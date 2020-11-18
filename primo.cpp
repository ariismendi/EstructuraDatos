//indicar si un numero es primo o no
#include <stdio.h>
//#include <math.h>
//#include <iostream>
//using namespace std;

int main(){
    int number;
    printf("Escriba un numero entero para saber si es primo\n");
    scanf("%i", &number);

    for(int i = 2; i < number; i++){
        if (number%i == 0){
        printf("fuckyou");
        }
        else {
        printf("holi");
        }
    }



    return 0;
}
