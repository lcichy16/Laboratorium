#include<stdio.h>

int main()
{
    int  x,y;
        printf("Wpisz liczbe  :\n");
            scanf ("%d",&x);
    
    if (x>=65){
        if (x<=90)
            printf("Ten znak ASCII jest litera :%d \n",x);
        if (x>=97)
            if (x<=122)
                printf("Ten znak ASCII jest litera :%d \n",x);
        else {
            printf("Ten znak nie jest litera alfabetu \n");
        }
    }
    else {
        printf("Ten znak nie jest litera alfabetu \n");
    }
   
    return 0;
}