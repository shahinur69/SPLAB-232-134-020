#include<stdio.h>
int main () {
    // using a for loop


    int i = 1;
    for(; i<= 10; i++){
        if(i % 2 == 0){
            printf("%d\n", i);
        }
    }
    return 0;

    //  using a while loop


    int j = 1;
    while(j <= 10){
        if(j % 2 == 0){
            printf("%d\n", j);
        }
        j++;
    }
    return 0;

    // using do-while loop


    int k = 1;
    do{
        if(k % 2 == 0){
           printf("%d\n", k);
        }
        k++;
    }
    while (k <= 10);

}
