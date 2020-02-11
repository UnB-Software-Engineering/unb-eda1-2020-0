/*
Faca um programa que leia n numeros inteiros e retorne o maior entre eles. Se houver numeros repetidos que
forem os maiores, imprima qualquer um deles.
*/

#include <stdio.h>

int main(){
    int n, maior;
    scanf("%d", &n);
    maior = n;

    while(scanf("%d", &n) != EOF){
        if(n>maior){
            maior = n;
        }
    }
    printf("%d\n", maior);

    return 0;
}
