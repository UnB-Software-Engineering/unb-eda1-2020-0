#include <stdio.h>

int main(){
    int quantidade, tipos, envelopes, bala;
    int i;

    scanf("%d%d", &quantidade, &tipos);

    int aux[tipos];//quantos tipos de bala existem

    for(i=0; i<tipos; i++) //para zerar o vetor
        aux[i]=0;

    for(i=0; i<quantidade; i++){
        scanf("%d", &bala);
        aux[bala-1]++;
    }
    /*
    for(i=0; i<tipos; i++)//teste para ver se o vetor aux armazenou corretamente
        printf("tipo %d: %d unidades\n", i+1, aux[i]);
    */
    envelopes = quantidade;

    for(i = 0; i<tipos; i ++){
         if (aux[i] < envelopes){
            envelopes = aux[i];
         }
    }

    printf("%d\n", envelopes);

    return 0;
}
