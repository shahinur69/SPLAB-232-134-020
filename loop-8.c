#include<stdio.h>
int main()
{
    int n, sum = 0;
    printf("enter positive integer number: ");
    scanf("%d", &n);
    if(n <= 1)
    {
        printf("please enter a positive number.\n");
        return 1;
    }
    for(int i = 1; i <= n; i+=2)
    {
        sum+=i;
    }
    printf("The sum of odd numbers from 1 to %d is %d.\n" , n, sum);

    return 0;

}
