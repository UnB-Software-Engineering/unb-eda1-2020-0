/*
Considere uma lista encadeada com no cabeça le definida por celulas:

typedef struct celula{
    char matricula[10];
    double mediaAtividades;
    double mediaProvas;
    struct celula *prox;
} celula;

Faca uma funcao que recebe uma lista encadeada encabeçada por l e a divide em duas listas l1 e l2 de forma que 
l1 contenha os alunos com media de atividades menores ou iguais a media de atividades da turma (na ordem em que aparecem em l) e 
l2 contenha os alunos com media de atividades maiores que a media de atividade da turma (na ordem em que aparecem em l).

void relatorioMediaAtividades(celula *l, celula *l1, celula *l2);

Observações
1. Voce não deve alocar nenhuma nova celula na sua função, apenas manipular os ponteiros dos nos de l para que
estejam em l1 ou l2.
2. Voce deve considerar que os nos cabeça l1 e l2 ja foram alocados antes da chamada para a função relatorioMediaAtividades.
3. Como consequencia, a lista encabeçada por l nao estara intacta apos a chamada da sua função.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    char matricula[10];
    double mediaAtividades;
    double mediaProvas;
    struct celula *prox;
} celula;

void relatorioMediaAtividades(celula *le, celula *menor, celula *maior, double media){
    celula *p;

    for(p = le->prox; p!=NULL; p = p->prox){
        if(p->mediaAtividades > media){
            maior->prox = p;
            maior = maior->prox;
        }
        else{
            menor->prox = p;
            menor = menor->prox;
        }
        if(p->prox == NULL){
            menor->prox = NULL;
            maior->prox = NULL;
        }
    }
}
