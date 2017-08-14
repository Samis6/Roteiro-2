#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char telefone[1];
    int i=0;

    while(telefone!='\n'){
    printf("Digite um numero de telefone:\n");
    scanf("%s",telefone);
    char telefonovo[10]="3";

     if(telefone[3]=='-'){
            strcat(telefonovo,telefone);
            } if(telefone[4]=='-'){
                strcpy(telefonovo,telefone);
            } if(telefone[7]=='\0'){
                    strncat(telefonovo,telefone,3);
                    strcat(telefonovo,"-");
                    strcat(telefonovo,&telefone[3]);
            }else if(telefone[8]=='\0'){
                   strncpy(telefonovo,telefone,4);
                   strcat(telefonovo,"-");
                   strcat(telefonovo,&telefone[4]);
            }



        printf("%s\n",telefonovo);
        }
        return 0;
    }

