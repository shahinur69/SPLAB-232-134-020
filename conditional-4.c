#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a,&b, &c);

    if(a>=b)
    {
        if(a>=c)
        {
            printf("%d is the largest number:\n ",a);
        }
        else
        {
            printf("%d is the largest number:\n ", c);
        }
    }
    else
    {
        if(b>=c)
        {
            printf("%d is largest number: \n", b);
        }
        else {}
        printf("Enter largest number: \n", c);
    }
    return 0;
}
