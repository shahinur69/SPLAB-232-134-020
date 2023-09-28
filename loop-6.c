#include<stdio.h>
int main() {
    int num, Num, reminder, sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);

    Num = num;
    while(num != 0){
        reminder = num % 10;
        sum+= reminder;
        num /= 10;
    }
    printf("The sum of digits in %d is %d: \n", Num, sum);
    return 0;
}
