#include <stdio.h>
#include <string.h>

int rumo9s(char s[1001], int grau){
    int soma = 0;

	for (int i = 0; i < strlen(s); i++){
		soma += s[i] - 48;
	}

	if(soma < 9){
		return -1;
	}

	if(soma > 9){
		char aux[1001];
		sprintf(aux, "%d", soma);
		return rumo9s(aux, grau+1);
	}

	return grau;
}

int main(){
	char s[1001];

	scanf(" %s", s);

	if(s[0] == '0' && s[1] == '\0')
		return 0;

	int grau = rumo9s(s,1);

	if(grau == -1)
	    printf("%s is not a multiple of 9.\n", s);

    else
        printf("%s is a multiple of 9 and has 9-degree %d.\n", s, grau);

	main();
}
