#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    int dado;
    struct celula *prox;
} celula;

void imprime(celula *le){
    celula *p = le->prox;

    if(le->prox==NULL) printf("NULL\n");

    else{
        while(p!=NULL){
            if(p->prox==NULL) printf("%d -> NULL\n", p->dado);
            else printf("%d -> ", p->dado);

            p=p->prox;
        }
    }
}

void imprime_rec(celula *le){
    if(le->prox==NULL) printf("NULL\n");

    else{
        printf("%d -> ", le->prox->dado);

        imprime_rec(le->prox);
    }
}

/*
void insere_inicio(celula *le, int x){
    celula *p;
    p = malloc(sizeof(celula));

    p->dado = x;
    p->prox = le->prox;

    le->prox = p;
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

    imprime_rec(le);

    return 0;
}
*/

