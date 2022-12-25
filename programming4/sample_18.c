#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
    srand(time(NULL));
    int i, x;

    for (i = 1; i <= 10; i++){
        x = rand() % 100;
        printf("x is %3d : ", x);

        if (x < 50) {
            printf("50未満（不合格）です \n");
        } else if (x < 80) {
            printf("50以上で80未満（合格）です \n");
        } else {
            printf("80以上（優秀な合格）です \n");
        }
    }
}
