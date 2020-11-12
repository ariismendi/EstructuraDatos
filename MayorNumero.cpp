#include <stdio.h>
#include <stdlib.h>

int main(){

int x, y, n;
printf("ingrese dos numeritos \n");

scanf("%i", &x);
scanf("%i", &y);

if (x<y){
printf("\n De los numeritos ingresados, el mayor es %i", y);
}

else {
printf("\n De los numeritos ingresados, el mayor es %i", x);
}
return 0;
}
