#include<stdio.h>
int main() {
    int num1, num2, largest;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter Second number: ");
    scanf("%d", &num2);

    largest = (num1>num2) ? num1:num2 ;
    printf("The largest number is %d\n", largest);
    return 0;
}
