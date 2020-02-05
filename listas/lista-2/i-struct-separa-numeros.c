#include <stdio.h>

typedef struct tipoData{
    int dia;
    int mes;
    int ano;
}tipoData;

typedef struct tipoPessoa{
    char nome[80];
    tipoData dtNascimento;
}tipoPessoa;

struct tipoPessoa separaInfo(char nome[80], int dt_nascimento){
    tipoPessoa.dtNascimento.ano = dt_nascimento/10000;
    tipoPessoa.dtNascimento.mes = dt_nascimento/10%10;
    tipoPessoa.dtNascimento.dia = dt_nascimento%100000;
};

int main(){
    char nome[80];
    int data;
    tipoPessoa separaInfo(char nome[80], int dt_nascimento);

    scanf("%[^\n]s", nome);
    scanf("%d", data);

    separaInfo(nome, data);

    printf("%d\n", tipoData.ano);

    return 0;
}
