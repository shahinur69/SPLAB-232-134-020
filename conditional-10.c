#include <stdio.h>
int main()
{
    int p,q;
    printf("enter first number: ");
    scanf("%d", &p);
    printf("enter second number: ");
    scanf("%d", &q);
    if(p == q)
    {
        printf(" they are equal");
    }
    else
    {
        printf("they are not equal");
    }
    return 0;
}
