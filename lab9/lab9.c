#include <stdio.h>
#include <string.h>
struct str{
    char imie[15];
    char nazwisko[15];
    int numer;

};

void main(){

    
struct str s1;

strcpy(s1.imie,"Lukasz") ;
strcpy(s1.nazwisko,"Cichy") ;
s1.numer = 5732842 ;

struct str s2;

strcpy(s2.imie,"Andrzej") ;
strcpy(s2.nazwisko,"Sapkowski") ;
s2.numer = 632412323 ;

printf("\n\n");
printf("Imie:%s\n",s1.imie);
printf("Nazwisko:%s\n",s1.nazwisko);
printf("Numer:%d\n",s1.numer);
printf("\n\n");
printf("Imie:%s\n",s2.imie);
printf("Nazwisko:%s\n",s2.nazwisko);
printf("Numer:%d\n",s2.numer);

}