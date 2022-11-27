#include <stdio.h>
int main (){
char tab[20];
int i;

    printf("Wpisz jakis napis:\n");
    scanf("%s",tab);
    printf("Wpisz jakas liczbe:\n");
    scanf("%d",&i);
    printf("%d znak tego napisu to %c\n",i,tab[i]);


}

