#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    int dado;
    struct celula *prox;
} celula;

void insere_inicio(celula *le, int x){
    celula *p;
    p = malloc(sizeof(celula));

    p->dado = x;
    p->prox = le->prox;

    le->prox = p;
}

void insere_antes(celula *le, int x, int y){
    celula *p, *q, *r;

    p = malloc(sizeof(celula));

    p->dado = x;
    q = le;

    for(r = le->prox; r!=NULL && r->dado!=y; r=r->prox)
        q=r;

    p->prox = r;
    q->prox = p;
}

/*
void imprime_rec(celula *le){
    if(le->prox==NULL) printf("NULL\n");

    else{
        printf("%d -> ", le->prox->dado);

        imprime_rec(le->prox);
    }
}

void inicializa(celula **le){
    *le = malloc(sizeof(celula));
    if(*le==NULL) exit(EXIT_FAILURE);
    (*le)->prox=NULL;
}

int main(){
    celula *le;

    inicializa(&le);

    insere_inicio(le, 1);
    insere_inicio(le, 2);
    insere_antes(le, 5, 3);

    imprime_rec(le);

    return 0;
}
*/


