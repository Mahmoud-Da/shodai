#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
    srand(time(NULL));
    int i, x;

    for (i = 1; i <= 5; i++){
        x = rand() % 100;
        printf("x is %2d :   ", x);

        if (x < 50) {
            printf("50未満 \n");
        } else {
            printf("50以上 \n");
        }
    }
}
