#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;

    printf("digite o valor:");
    scanf("%d",&valor);

    Sequencia(valor);

    return 0;
}
 int Sequencia(int x){

  int i;
  int j;


  for(i=1;i<=x;i++){
        for(j=1;j<=i;j++){
             printf("\t%d",j);
        }
    printf("\n");
  }

 }
