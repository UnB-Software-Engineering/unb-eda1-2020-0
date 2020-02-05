#include <stdio.h>

int main(){
    int a, c, viagens=0;

    scanf("%d%d", &c, &a);

    if(a<c){
       viagens=1;
    }else{
        while(a>=c){
            a=a-c+1;
            viagens++;
        }
        viagens++;
    }
    printf("%d\n", viagens);
    return 0;
}
