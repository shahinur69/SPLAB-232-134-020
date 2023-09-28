#include<stdio.h>
int CheckFunction(int number){
        if(number % 2 == 0) {
            printf("This is a even number");
        }
        else{
            printf("This is a odd number");
        }

    }

int main() {
    CheckFunction(9);
    return 0;
}
