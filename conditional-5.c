#include<stdio.h>
int main() {
    char character;
    printf("Enter the characters: ");
    scanf("%c", &character);
    int isAlphabet =(character>= 'a' && character<= 'z'
                 || character>= 'A' && character<= 'Z');
    if(isAlphabet){
        printf("%c is an alphabet", character);
    }
    else{
        printf("%c is not an alphabet", character);
    }
    return 0;
}
