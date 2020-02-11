/*
Faca um programa que leia um elemento a e um elemento b, sendo a inteiro e b inteiro nao negativo) e retorne, 
de forma recursiva, a elevado a b. O resultado devera ser apresentado com no minimo duas casas apos a virgula.
*/

#include <stdio.h>

float pot(float a, float b){
    if (a == 0 && b == 0)
        return -1;
    else if(a != 0 && b == 0)
        return 1;
    else if(a == 0 && b != 0)
        return 0;
    else if(a > 0 && b > 0)
        return a * pot(a,b-1);
    else if(b < 0)
        return 1 / (a * pot(a,(b*-1)-1));
}

int main(){
    float a, b;
    scanf("%f%f", &a, &b);
    if(pot(a, b) == -1)
        printf("indefinido\n");
    else
        printf("%0.3f\n", pot(a,b));
    return 0;
}
