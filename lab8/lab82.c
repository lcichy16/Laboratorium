#include <stdio.h>
#include <stdlib.h>
int main(){

int n,i=0;

printf("Wpisz dowolna liczbe: ");
scanf("%d",&n);
FILE *fp;
FILE *fs;
if ((fp=fopen("parzyste.txt", "w+"))==NULL) {
     printf ("Nie mogę otworzyć pliku test.txt do zapisu!\n");
     exit(1);
     }
if ((fs=fopen("nieparzyste.txt", "w+"))==NULL) {
     printf ("Nie mogę otworzyć pliku test.txt do zapisu!\n");
     exit(1);
     }     
for (i;i<n;i++){
    int a;
    scanf("%d",&a);

    if (a%2==0){
        fprintf(fp, "%d\n", a);
    }

    else{
        fprintf(fs, "%d\n", a);
    }

}


}