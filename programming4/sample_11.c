#include <stdio.h>
int main(void){

    int beer, shochu;
    float alcohol;

    scanf("%d", &beer);
    printf("beer --> %d (ml) \n", beer);

    scanf("%d", &shochu);
    printf("shochu --> %d (ml) \n", shochu);

    alcohol = beer * 0.05 + shochu * 0.25;
    printf("*** alcohol --> %5.2f (ml) *** \n", alcohol);
}
