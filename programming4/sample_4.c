#include <stdio.h>

int main()
{
    int a, b, temp;      // 変数a, b, tempを定義

    a = 15;              // 変数aに15を代入
    b = 37;              // 変数bに37を代入
    printf("最初　　a = %d, b = %d \n", a, b); //aとbを出力

    // aとbの値を入れ替えたい

    a = temp;
    a = b;
    b = temp;
    printf("入替後　a = %d, b = %d \n", a, b); //aとbを出力

    return 0;
}
