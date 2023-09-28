#include<stdio.h>
int main() {
    float fahrenheit, celsius ;
    printf("enter Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("%.3f Celsius= %.3f Fahrenheit",celsius, fahrenheit);
    return 0;

}
