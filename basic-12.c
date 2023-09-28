#include<stdio.h>
int main() {
    int days;
    scanf("%d", &days);

    int years = days/365;
    int weeks = (days%365)/7;
    int allDays = (days%365)%7;
    printf("enter for years: %d\n" , years);
    printf("enter for weeks: %d\n" , weeks);
    printf("enter for allDays: %d\n" , allDays);
    return 0;
}
