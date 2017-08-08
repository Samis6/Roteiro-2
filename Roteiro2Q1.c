#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hora;
    int minutos;

    printf("Digite a hora:");
    scanf("%d",&hora);
    printf("Digite os minutos:");
    scanf("%d",&minutos);

    if(hora>12){
        hora=hora-12;

        printf("%d:%d P.M",hora,minutos);
    }if(hora<12){
         printf("%d:%d A.M",hora,minutos);
    }




    return 0;
}
