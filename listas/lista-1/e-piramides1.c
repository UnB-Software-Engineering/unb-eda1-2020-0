#include <stdio.h>

int main(){
    int n, i, j;

    scanf("%d", &n);

//primeira piramide
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            if(j<i){
                if(i<10){
                    printf("0%d ", i);
                } else{
                    printf("%d ", i);
                }
            } else{ //nao colocar espaco depois do ultimo numero da linha
                if(i<10){
                    printf("0%d", i);
                } else{
                    printf("%d", i);
                }
            }
        }
        printf("\n");
    }

    printf("\n");

//segunda piramide
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            if(j<i){
                if(j<10){
                    printf("0%d ", j);
                } else{
                    printf("%d ", j);
                }
            } else{ //nao colocar espaco depois do ultimo numero da linha
                if(j<10){
                    printf("0%d", j);
                } else{
                    printf("%d", j);
                }
            }
        }
        printf("\n");
    }

    return 0;
}

