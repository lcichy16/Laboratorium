#include<stdio.h>

int main()
{
    int  a,b,wynik,c;
    int i=1;
    printf("Wpisz liczbe a i b: \n");
    scanf("%d %d",&a,&b);
    c=a;
    printf("Liczba a:%d \nLiczba b:%d\n",a,b);

    for (i;i<b;i++){

        
        
        c*=a;
        
    }
    printf("%d",c);


    return 0;
}
    