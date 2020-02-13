#include<stdio.h>
#include<string.h>

int isPalindromo(char *str, int N){
    int i, j;
	for(i=0, j=N-1; i<j; i++, j--){
		if (str[i] != str[j])
			return 0;
	}
	return 1;
}

int main() {
    int N;
    char *palavra;
    palavra = malloc(N*sizeof(char));

    scanf("%d", &N);
    scanf("%s", palavra);

	printf("%d\n", isPalindromo(palavra, N));

    return 0;
}

