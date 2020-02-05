#include <stdio.h>
#include <string.h>

int main(){
    char t[101], primeiro[101]="", ultimo[101]="";
    int i=0, j=0, tam;

    scanf("%[^\n]s", t);

    tam = strlen(t);

    while(t[i] != '\0'){
        if(t[i] >= 65 && t[i] <= 90)
            t[i]+=32;
        i++;
    }

    //pega primeiro nome
    for(i = 0; i < tam; i++){
        if(t[i] == ' ')
            break;
        primeiro[i] = t[i];
    }

    //pega ultimo sobrenome
    for(i = 0; t[i] != '\0'; i++){
        ultimo[j] = t[i];
        if(ultimo[j] == ' ')
            j = 0;
        else
            j++;
    }

    ultimo[j] = '\0';

    printf("%s.%s@unb.br\n", primeiro, ultimo);

    return 0;
}
