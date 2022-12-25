#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));
    int i, x, y;

    for (i = 1; i <= 10; i++){
        x = rand() % 9 + 1;
        printf("Random number (1 -- 9) :  %3d \n", x);
    }
}
