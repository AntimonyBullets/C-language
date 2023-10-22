#include <stdio.h>

int main(){
    float celsius, f;
    printf("Enter the temperature in Centigrade (degree Celsius)\n");
    scanf("%f", &celsius);
    f = (celsius*9/5) + 32;
    printf("The temperature is converted to %f fahrenheit", f);
    return 0;
}