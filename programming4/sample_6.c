#include <stdio.h>

int main(void){

    int a = 24;  //変数aに24を代入
    int b = 5;   //変数bに5を代入
    int x,  y;   //変数x, yを定義

    x = a + b;   //a＋bをxに代入
    y = a / b;   //a÷bをyに代入

    printf("加算 %d \n", x);   //xを表示
    printf("除算 %d \n", y);   //yを表示
}
