#include <stdio.h>

int main(){
    int consumo, franquia = 7, cons1, cons2, cons3, total;

    scanf("%d", &consumo);

    if(consumo > 10){
        if(consumo >= 11 && consumo <= 30){
            cons1 = consumo - 10;
            total = cons1 * 1 + franquia;
        } else if(consumo >= 31 && consumo <= 100){
            cons2 = consumo - 30;
            cons1 = consumo - cons2 - 10;
            total = cons1 * 1 + cons2 * 2 + franquia;
        } else{
            cons3 = consumo - 100;
            cons2 = consumo - cons3 - 30;
            cons1 = consumo - cons3 - cons2 - 10;
            total = cons1 * 1 + cons2 * 2 + cons3 * 5 + franquia;
        }
    } else{
        total = franquia;
    }

    printf("%d\n", total);

    return 0;
}
