#include <stdio.h>
#include <string.h>

int countPairs(char str[201], int aux){
    if(aux == strlen(str)-1 || strlen(str) <= 2)
        return 0;

    if(aux == 0 || str[aux-1] != str[aux+1])
        return countPairs(str, aux+1);

    else
        return 1 + countPairs(str, aux+1);
}

int main(){
    char str[201];
    scanf(" %s", str);
    printf("%d\n", countPairs(str, 0));
    return 0;
}
