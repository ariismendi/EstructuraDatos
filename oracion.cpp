//crear un programa que lea una oracion por stdin y la convierta a mayusculas
#include <stdio.h>
#include <stdlib.h>

int main(){

char sentence[40];
scanf("%[^\n]s", sentence);

for(int i = 0; i < sizeof(sentence); i++ ){
   if(sentence[i] >=97 && sentence[i] <= 122){
			sentence[i] = sentence[i] - 32;
    }
}


printf("%s", sentence);


return 0;
}
