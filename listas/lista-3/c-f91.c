#include <stdio.h>

int maldicao(unsigned int n){
    if(n==0)
        return 0;

    else if(n>=101){
        printf("f91(%u) = %u\n", n, n-10);
        scanf("%u", &n);
        maldicao(n);
    }

    else if(n<=100){
        printf("f91(%u) = 91\n", n);
        scanf("%u", &n);
        maldicao(n);
    }
}

int main(){
    unsigned int n;
    scanf("%u", &n);
    maldicao(n);
    return 0;
}
