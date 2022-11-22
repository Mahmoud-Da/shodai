#include <stdio.h>
int main(void){

    int beer, shochu;
    float alcohol;

    printf("ビールの量(ml)を整数で入力してください：\n");
    scanf("%d", &beer);

    printf("焼酎の量(ml)を整数で入力してください：\n");
    scanf("%d", &shochu);

    alcohol =  beer * 0.05 + shochu * 0.25;
    printf("*** アルコールは %5.2f (ml) *** \n", alcohol);
}
