#include<stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if(isupper(ch)){
        printf("%c is a upper case", ch);
    }
    else if(islower(ch)){
        printf("%c is a lower case");
    }
    else{
        printf("%c is not a case", ch);
    }
    return 0;
}
