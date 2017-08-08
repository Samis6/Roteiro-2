#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Digite um valor:\n");
    scanf("%d",&n);

    if(eh_primo(n)){
        printf("eh primo");
    }else{
        printf("Nao eh primo\n");
    }
    return 0;
}
int eh_divisivel(int x, int y){

    if(x%y==0){
        return 1;
    }else{
        return 0;
    }
}

int eh_primo(int n){

    int i=n;
    int t;
    int u=0;

    while(i>0){
    t=eh_divisivel(n,i);
    i--;
    if(t){u++;}
    }

    if(u>2){
        return 0;
    }else{
        return 1;
    }
}
