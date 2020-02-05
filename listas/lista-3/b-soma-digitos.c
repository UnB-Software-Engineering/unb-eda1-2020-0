#include <stdio.h>

int soma(unsigned long n){
    if(n==0) return 0;

    else
        return ((n%10) + soma(n/10));
}

int main(){
    unsigned long num;

    scanf("%lu", &num);
    printf("%lu\n", soma(num));

    return 0;
}
