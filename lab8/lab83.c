#include <stdio.h>
#include <stdlib.h>
int main(){

int n,i=0;


FILE *fp;

char imie[20];
char nazwisko[30];
  
printf("Wprowadz nazwisko: ");
scanf("%s", &nazwisko);
printf("Wprowadz imie: ");
scanf("%s", &imie);

if ((fp=fopen("baza.txt", "w+"))==NULL) {
     printf ("Nie mogę otworzyć pliku test.txt do zapisu!\n");
     exit(1);
     }     
for (i;i<70;i++){
    if()
    

}


}