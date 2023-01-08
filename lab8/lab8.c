#include <stdio.h>
#include <limits.h>
int main(){
char nazwa[50];
int liczba;
printf("Podaj nazwe pliku:");
scanf("%s",nazwa);
int min = INT_MAX;
int max = INT_MIN;
FILE* plik=fopen(nazwa, "r");

if (plik == NULL){
    printf("Nie dziala");
}
while (fscanf(plik,"%d",&liczba)==1){
    if (liczba>max){
        max=liczba;
    }
    if (liczba<min){
        min=liczba;
    }
}
printf("Max:%d",max);
printf("Min:%d",min);

}