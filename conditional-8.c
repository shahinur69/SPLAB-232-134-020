#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an character: ");
    scanf("%c", &ch);

    if((ch >= 'a' && ch <= 'z'));
    {
        switch (ch)
        {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':

            printf("%c is a vowel", ch);
            break;
        default :
        {
            printf("%c is consonant", ch);
        }
        }
        return 0;
    }
}
