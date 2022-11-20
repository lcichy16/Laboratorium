#include<stdio.h>

int main()
{
    int  a,b,wynik,c;

    printf("Wpisz liczbe a i b: \n");
    scanf("%d %d",&a,&b);
    int i=1;
    printf("Liczba a:%d \nLiczba b:%d\n",a,b);

   
    for (i;a>b;i++){

        
        
        a*=i;
    }


    return 0;
}
    