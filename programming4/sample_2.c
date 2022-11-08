#include <stdio.h>

int main()
{
    int total = 0;                //変数totalを0で初期化する
    int i;

    for (i = 1; i <= 100; i++){   //i=1から100まで繰り返す
        total += i;               //totalにiを足す
    }

    printf("1から100までの合計：total = %d \n", total);  //totalを出力する
    return 0;
}
