#include<stdio.h>
int main () {
    int x,y,z;
    printf("Enter three numbers:  ");
    scanf("%d%d%d",&x, &y ,&z);
    if(x>y && x>z){
        printf("The largest number is %d", x);
    }
    else if(y>x && y>z){
        printf("The largest number is %d", y);
    }
    else if(z>x && z>y){
         printf("The largest number is %d", z);
    }
    else{
       printf("Two or three numbers are equal.");
    }
    return 0;
}
