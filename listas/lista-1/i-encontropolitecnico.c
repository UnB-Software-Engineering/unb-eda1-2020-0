#include <stdio.h>
int main(){
    int n, m;
    int a , b, xa=1, ya=1, xb, yb, i, p;

    int dx[] = {0, 0, 1, -1};
    int dy[] = {1, -1, 0, 0};

    scanf("%d %d",&n,&m);//colunas e linhas
    scanf("%d",&p);//quantos movimentos cada professor fez

    xb = n;
    yb = m;

    for(i=1; i<=p; i++){
        scanf("%d %d",&a,&b);
        a--;
        b--;

        xa += dx[a];
        ya += dy[a];
        xb += dx[b];
        yb += dy[b];

        if(xa==0 || xa == n+1 || ya==0 || ya==m+1){
            printf("PA saiu na posicao (%d,%d) no passo %d\n",xa,ya,i);
            return 0;
        }
        else if (xb==0 || xb == n+1 || yb==0 || yb==m+1){
            printf("PB saiu na posicao (%d,%d) no passo %d\n",xb,yb,i);
            return 0;
        }
        else if (xa==xb && ya==yb){
            printf("Encontraram-se na posicao (%d,%d) no passo %d\n",xa,ya,i);
            return 0;
        }
    }

    printf("Nao se encontraram\n");

    return 0;
}
