#include <stdio.h>

int main(){
    unsigned long long int cpf, cpf_aux;
    int verificador, i, soma=0, d1, d2, n, resultado=0;

    scanf("%lld", &cpf);

    //calculo do primeiro digito
    cpf_aux = cpf/100;

    for(i=2; i<=10; i++){
        n=cpf_aux%10;
        soma += n*i;
        cpf_aux/=10;
    }

    if((11-(soma%11))==10 || (soma%11)==0)
        d1=0;
    else
        d1=11-(soma%11);

    //calculo do segundo digito
    cpf_aux = cpf/100;
    soma=0;

    for(i=2; i<=11; i++){
        if(i==2)
            soma += d1*i;
        else{
            n=cpf_aux%10;
            soma += n*i;
            cpf_aux/=10;
        }
    }

    if((11-(soma%11))==10 || (soma%11)==0)
        d2=0;
    else
        d2=11-(soma%11);

    verificador = (d1*10)+d2;

    //compara com ultimos digitos do cpf informado
    if(verificador == cpf%100)
        resultado=1;

    //imprime
    if (resultado==1)
        printf ("valido\n");
    else
       printf ("invalido\n");

    return 0;
}
