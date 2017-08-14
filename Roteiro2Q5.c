#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo[10];
    int altura[10];
    int maior=0;
    int menor=0;
    int MENR=0;
    int MAYOR=0;
    int i=0;
    int MedF=0,MedM=0;
    int conF=0,contM=0;

    for(i=0;i<10;i++){
     printf("Digite o sexo:");
     scanf("\n%c",&sexo[i]);
     printf("Digite a altura em centimetros:");
     scanf("%d",&altura[i]);
    }

    i=0;
    maior=Compara(altura[i],altura[i+1]);
    MAYOR=maior;

        for(i=1;i<10;i++){
        MAYOR=Compara(MAYOR,altura[i]);
        }

        for(i=0;MAYOR!=altura[i];i++){
        }
    //printf("\no local dela eh %d",i);
    printf("\nA maior altura eh %d do sexo %c",altura[i],sexo[i]);

    i=0;
    menor=ComparaMEN(altura[i],altura[i+1]);
    MENR=menor;

        for(i=1;i<10;i++){
        MENR=ComparaMEN(MENR,altura[i]);
        }

        for(i=0;MENR!=altura[i];i++){
        }
     printf("\nA menor altura eh %d do sexo %c",altura[i],sexo[i]);

    for(i=0;i<10;i++){
      if(sexo[i]=='F'){
        MedF=MedF+altura[i];
        conF++;
      }else if(sexo[i]=='M'){
        MedM=MedM+altura[i];
        contM++;
      }
    }

    printf("\nO numero de mulheres eh %d",conF);
        printf("\nA media de altura feminina eh %d",(MedF/conF));
    printf("\nO numero de mulheres eh %d",contM);
         printf("\nA media de altura masculina eh %d",(MedM/contM));

    return 0;
}
int Compara(int x, int y){

    int a;
   if(x>y){
    a=x;
   }if(y>x){
    a=y;
   }if(x==y){
    a=x;
   }
   //printf("Compara retorna %d\n",a);
   return a;

}
int ComparaMEN(int x, int y){

    int a;
   if(x<y){
    a=x;
   }if(y<x){
    a=y;
   }if(x==y){
    a=x;
   }
   //printf("Compara retorna %d\n",a);
   return a;

}
