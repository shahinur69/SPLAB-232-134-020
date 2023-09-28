#include<stdio.h>
int addition(int a, int b){
     return a + b;
}

int substract(int a, int b){
     return a - b;
}

int multiply(int a, int b){
    return a * b;
}

float division(float a, float b){
      return a / b;
}

int mod(int a, int b){
      int vagshesh = a % b ;
      return vagshesh;
}

int main() {
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Addition is %d \n", addition(a,b));
    printf("Substract is %d \n", substract(a,b));
    printf("Multiply is %d \n", multiply(a,b));
    printf("Division is %f \n", division(a,b));
    printf("Modulus is %d \n", mod(a,b));
    return 0;
}
