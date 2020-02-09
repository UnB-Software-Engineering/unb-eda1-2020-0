#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    int dado;
    struct celula *prox;
} celula;
/*
void remove_depois(celula *le, int x){
    celula *p, *q;
    p = le;

    for(q = le->prox; q != NULL && q->dado != x; q = q->prox)
        p = q;

    if(q != NULL){
        p = p->prox;
        q = q->prox;
        p->prox = q->prox;
        free(q);
    }
}
*/

int remove_depois(celula *p){
    celula *q;
    if(p->prox==NULL) EXIT_FAILURE;

    else if(p != NULL){
        q = p->prox;
        p->prox = q->prox;
        free(q);
    }
}

void remove_elemento(celula *le, int x){
    celula *p, *q;
    p = le;

    for(q = le->prox; q != NULL && q->dado != x; q = q->prox)
        p = q;

    if(q != NULL) {
        p->prox = q->prox;
        free(q);
    }
}

void remove_todos_elementos(celula *le, int x){
    celula *p, *q, *r;
    p = le;

    for(q = le->prox; q != NULL; q = q->prox){
        if(q->dado == x){
            p->prox = q->prox;
            r = q;
            q = p;
            free(r);
        }
        p = q;
    }
}

/*
void inicializa(celula **le){
    *le = malloc(sizeof(celula));
    if(*le==NULL) exit(EXIT_FAILURE);
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
    celula *le;

    inicializa(&le);

    insere_inicio(le, 1);
    insere_inicio(le, 2);
    insere_inicio(le, 3);
    insere_inicio(le, 4);
    insere_inicio(le, 5);
    insere_inicio(le, 6);

    remove_depois(le);

    imprime_rec(le);

    return 0;
}
*/
