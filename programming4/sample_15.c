#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));
    int i, x, y;

    for (i = 1; i <= 10; i++){
        x = rand() % 100;
        printf("Random number (0 -- 99) : %5d \n", x);
    }
}
