#include<stdio.h>

int main()
{
    int  x,y;
    printf("Wpisz pierwsza liczbe:\n");
    scanf ("%d",&x);
    printf("Wpisz druga liczbe:\n");
    scanf ("%d",&y);
    if (x>y){
        printf("Ta liczba jest wieksza:%d \n",x);
    }
    else {
        printf("Ta liczba jest wieksza:%d\n",y);
    }

    return 0;
}
    