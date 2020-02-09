#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    int dado;
    struct celula *prox;
} celula;

void mescla_listas(celula *le1, celula *le2, celula *le3){
    celula *p, *t, *r, *aux;

    for(p = le1->prox, t = le2->prox, r = le3; p != NULL && t != NULL; r = r->prox){
        if(p->dado < t->dado){
            aux = p->prox;
            r->prox = p;
            p = aux;
        }
        else{
            aux = t->prox;
            r->prox = t;
            t = aux;
        }
    }

    if(p == NULL)
        r->prox = t;

    else if(t == NULL)
        r->prox = p;
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
    celula *le1, *le2, *le3;

    inicializa(&le1);
    inicializa(&le2);
    inicializa(&le3);

    insere_inicio(le1, 10);
    insere_inicio(le1, 9);
    insere_inicio(le1, 7);
    insere_inicio(le1, 1);

    insere_inicio(le2, 8);
    insere_inicio(le2, 3);
    insere_inicio(le2, 2);

    mescla_listas(le1, le2, le3);

    imprime_rec(le3);

    return 0;
}
*/
