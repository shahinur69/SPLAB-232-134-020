#include<stdio.h>
void swap(int x, int y){
     int temp;
     temp = x;
     x = y;
     y = temp;
     printf("After swapping: a = %d and b = %d", x, y);
}

int main() {
    int a,b;
    printf("enter values for a and b: \n");
    scanf("%d%d" , &a , &b);
    printf("Before swapping: a = %d and b = %d\n", a, b);
    swap(a,b);
    return 0;
}
