#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo[10];
    float altura[10];

    int i=0;
    while(i<10){
    printf("Digite o sexo e a altura:");
    scanf("%c",&sexo[i]);
    scanf("%f",&altura[i]);
    i++;
    }

    i=0;
    while(i<9){
        compara(altura[i],altura[i+1]);

    }
    printf("Hello world!\n");
    return 0;
}
int compara(int x, int y){
   int maior;
   if(x>y){
    return x;
   }else{
    return y;
   }
}
