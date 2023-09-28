#include<stdio.h>
int main() {
    int x,y;
   printf("enter hours:");
   scanf("%d", &x);
   printf("enter minutes:");
   scanf("%d", &y);

   printf("total minutes: %d\n", x*60 + y);

}
