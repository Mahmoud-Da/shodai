#include <stdio.h>

int main()
{
    int total;                //変数totalを0で初期化する
    int i, n;

    while(1){
        printf("整数を入力してください：");
        scanf("%d", &n);
        total = 0;

        for (i = 1; i <= n; i++){   //i=1から100まで繰り返す
            total += i;               //totalにiを足す
        }
        printf("1から%dまでの合計は %d \n \n", n, total);  //totalを出力する
    }

    return 0;
}
