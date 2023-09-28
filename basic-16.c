#include <stdio.h>
#include <ctype.h>
int main()
{
    // Transform capital letter to small letter using tolower() function
    char smallLetter;
    scanf("%c", &smallLetter);
    char capitalLetter = toupper(smallLetter);
    printf("%c", capitalLetter);

    return 0;
}
