#include <stdio.h>
#include <math.h>

int encaixa(int a, int b){
    int n=1, i, j=0, auxa, auxb, mult=0;

    auxb = b;

    while(auxb>0){
        auxb=auxb/10;
        j++;
    }

    //printf("%d\n", j);

    mult=pow(10,j);

    //printf("%d\n", mult);

    auxa = a%mult;

    if(auxa==b)
        return 1;
        //printf("1\n");
    else
        //printf("0\n");
        return 0;
}
/*
int main(){
    int x, y;
    scanf("%d%d", &x,&y);

    encaixa(x,y);

    return 0;
}
*/
