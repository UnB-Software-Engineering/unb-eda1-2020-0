#include <stdio.h>

int main(){
    int n, i, soma=0, media, j=0;

    scanf("%d", &n);

    int v[n];
    int maiores[n];

    for(i=0; i<n; i++){
        scanf("%d", &v[i]);
        soma += v[i];
    }

    media = soma/n;

    for(i=0; i<n; i++){
        if(v[i]>media)
            maiores[j++]=v[i];
    }

    //imprimir
    if(j==0){
        printf("0\n");
    } else{
        for(i=0; i<j; i++){
            if(i==j-1)
                printf("%d\n", maiores[i]);
            else
                printf("%d ", maiores[i]);
        }
    }

    return 0;
}
