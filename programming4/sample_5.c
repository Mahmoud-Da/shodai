#include <stdio.h>

int main()
{
    int total = 0;                // totalを0で初期化する
    int i, n;

    printf("整数を入力してください：");
    scanf("%d", &n);             // 入力された整数をnに入れる

    for (i = 1; i <= n; i++){    // i=1からnまで繰り返す
        total = total + i;       // totalにiを加える
    }
    printf("1から%dまでの合計は %d \n \n", n, total);
                                 // totalを出力する

    return 0;
}
