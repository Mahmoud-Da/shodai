#include <stdio.h>
int main(void){

    float taiju, shincho, bmi;

    printf("体重(kg)を入力してください：\n");
    scanf("%f", &taiju);                 // 入力された実数をtaijuに入れる

    printf("身長(cm)を入力してください：\n");
    scanf("%f", &shincho);   // 入力された実数をshinchoに入れる

    shincho = shincho / 100;
                                   // 身長の単位をcmからmに変える
    bmi =  taiju / (shincho * shincho);
                                   // BMIを計算する
    printf("*** BMI指数は %5.2f *** \n", bmi);
}
