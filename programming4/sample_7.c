#include <stdio.h>
int main(void){

    float taiju = 63.2;                            // 体重 (kg)
    float shincho = 175.8;                   // 身長 (cm)
    float bmi;

    shincho = shincho / 100;
                                   // 身長の単位をcmからmに変える
    bmi =  taiju / (shincho * shincho);
                                   // BMIを計算する
    printf("BMI指数は %5.2f \n", bmi);
}
