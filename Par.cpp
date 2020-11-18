//Lee un numero e indica si es par o no
#include <stdio.h>
#include <stdlib.h>

int number;

int main(){

printf("Ingrese el número entero para evaluar su paridad\n");
scanf("%i", &number);

if (number%2 == 0){
    printf("El número es par\n");
}
else {
    printf("El número es impar\n");
}

return 0;
}
