#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));
    int i, x, y;

    for (i = 1; i <= 10; i++){
        x = rand();
        y = x % 1000;
        printf("Random number : %5d  --> %3d \n", x, y);
    }
}
