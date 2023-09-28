#include<stdio.h>
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a % 2 == 0){
        printf("It Is Even Number");
    }
    else{
        printf("It Is Odd Number");
    }
    return 0;
}
