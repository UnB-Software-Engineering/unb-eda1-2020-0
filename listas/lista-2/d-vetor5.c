#include <stdio.h>

int main(){
    int n, x, aux=0;
    int i;

    scanf("%d", &n);
    while(n<5 || n>10000){
        scanf("%d", &n);
    }

    int v[n];

    for(i=0; i<n; i++){
        scanf("%d", &v[i]);
    }

    scanf("%d", &x);

    i=0;
    while(aux==0 && i<n){
        if(x==v[i])
            aux=1;
        i++;
    }

    if(aux==1)
        printf("pertence\n");
    else
        printf("nao pertence\n");

    return 0;
}

