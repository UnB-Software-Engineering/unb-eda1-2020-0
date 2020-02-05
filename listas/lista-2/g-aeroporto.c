#include <stdio.h>

int main(){
    int i, aeroportos, voos, x, y, teste=1, vetor[101], maior;

    while(scanf("%d%d", &aeroportos, &voos), aeroportos !=0 && voos !=0){
        //zera vetor
        //for(int i=1; i<=voos; i++)
            //vetor[i]=0;
        memset(vetor, 0, sizeof vetor);
        maior = -1;

        for(i = 0; i < voos; i++){
            scanf("%d%d", &x, &y);
            vetor[x]++;
            vetor[y]++;
        }

        printf("Teste %d\n", teste++);

        for(i = 1; i <= aeroportos; i++){
            if(vetor[i] > maior)
                maior = vetor[i];
        }

        for(i = 1; i <= aeroportos; i++){
            if(vetor[i] == maior)
                printf("%d ", i);
        }

        printf("\n\n");
    }
    return 0;
}
