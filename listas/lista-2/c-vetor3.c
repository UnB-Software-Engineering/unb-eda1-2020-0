#include <stdio.h>

int main(){
    int n;
    int i, j=0, k=0, auxpar=0, auximpar=0;; //auxiliares

    scanf("%d", &n);
    while(n<5 || n>10000){
        scanf("%d", &n);
    }

    int v, par[n], impar[n];

    for(i=0; i<n; i++){
        scanf("%d", &v);
        if(v%2==0){
            par[j++]=v;
            auxpar++;
        }
        else{
            impar[k++]=v;
            auximpar++;
        }
    }
    if(auxpar == 0){
        printf("\n");
    }

    //imprimir
    for(i=0; i<j; i++){
        if(i==j-1)
            printf("%d\n", par[i]);
        else
            printf("%d ", par[i]);
    }

    for(i=0; i<k; i++){
        if(i==k-1)
            printf("%d\n", impar[i]);
        else
            printf("%d ", impar[i]);
    }

    if(auximpar == 0){
        printf("\n");
    }

    return 0;
}
