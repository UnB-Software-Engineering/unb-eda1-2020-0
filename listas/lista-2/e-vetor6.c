#include <stdio.h>

int main(){
    int n, i;

    scanf("%d", &n);
    while(n<5 || n>10000){
        scanf("%d", &n);
    }

    int v1[n], v2[n], somas[n];

    for(i=0; i<n; i++){
        scanf("%d", &v1[i]);
    }

    for(i=0; i<n; i++){
        scanf("%d", &v2[i]);
    }

    //soma
    for(i=0; i<n; i++){
        somas[i]=v1[i]+v2[i];
    }

    //imprime
    for(i=0; i<n; i++){
        if(i==n-1)
            printf("%d\n", somas[i]);
        else
            printf("%d ", somas[i]);
    }

    return 0;
}

