#include<stdio.h>
#define PI 3.1416
#define ID 54632892
int main() {
   /* symbolic */
    printf("%f\n", PI);
    printf("%d\n", ID);
    printf("%\n");

    /* constant */
    const int cons = 45;
    printf("%d\n", cons);
    const float floa = 3.5;
    printf("%0.2f\n", floa);

}
