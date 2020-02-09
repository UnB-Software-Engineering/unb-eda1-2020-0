#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    int dado;
    struct celula *prox;
} celula;

void divide_lista(celula *le, celula *odd, celula *even){
    celula *p;

    for(p = le->prox; p != NULL; p = p->prox){
        if((p->dado % 2) != 0){ //impar
            odd->prox = p;
            odd = odd->prox; //odd++
        }
        else{ //par
            even->prox = p;
            even = even->prox; //even++
        }
        if(p->prox == NULL){
            odd->prox = NULL;
            even->prox = NULL;
        }
    }
}
/*
void inicializa(celula **le){
    *le = malloc(sizeof(celula));
    if(*le==NULL) EXIT_FAILURE;
    (*le)->prox=NULL;
}

void imprime_rec(celula *le){
    if(le->prox==NULL) printf("NULL\n");

    else{
        printf("%d -> ", le->prox->dado);

        imprime_rec(le->prox);
    }
}

void insere_inicio(celula *le, int x){
    celula *p;
    p = malloc(sizeof(celula));

    p->dado = x;
    p->prox = le->prox;

    le->prox = p;
}

int main(){
    celula *le, *odd, *even;

    inicializa(&le);
    inicializa(&odd);
    inicializa(&even);

    insere_inicio(le, 2);
    insere_inicio(le, 1);
    insere_inicio(le, 3);
    insere_inicio(le, 4);
    insere_inicio(le, 5);
    insere_inicio(le, 6);

    divide_lista(le, odd, even);

    printf("odd -> ");
    imprime_rec(odd);

    printf("even -> ");
    imprime_rec(even);

    return 0;
}
*/
