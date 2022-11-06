#include<stdio.h>

int main()
{
    int  x,y,z;
        printf("Wpisz date (kolejno dzien miesiac rok):\n");
            scanf ("%d %d %d",&x,&y,&z);
    
    if (x <=31 && x>0){
        if (y<=12 && x>0){
            if (z<=2030 && x>0)
                printf("Twoja data jest poprawna\n");
             else {
                printf("Data nie jest poprawna\n");
    } 
        }   
        else {
            printf("Data nie jest poprawna\n");
    } 


    }
    else {
        printf("Data nie jest poprawna\n");
    }   
    return 0;
}