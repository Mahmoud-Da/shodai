#include <stdio.h>
int main(void){

    int beer, shochu, wine;
    float alcohol;

    scanf("%d", &beer);
    printf("beer --> %d (ml) \n", beer);

    scanf("%d", &shochu);
    printf("shochu --> %d (ml) \n", shochu);

    scanf("%d", &wine);
    printf("wine --> %d (ml) \n", wine);

    alcohol = beer * 0.05 + shochu * 0.25 + wine * 0.12;
    printf("*** alcohol --> %5.2f (ml) *** \n", alcohol);
}
