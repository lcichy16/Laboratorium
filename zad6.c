#include<stdio.h>

int main()
{
    int  x,y,z=4;
        printf("Wpisz Rok  :\n");
            scanf ("%d",&x);
    
    if (x % z==0){
        printf("Rok jest przestepny");
            
    }

    else {
        printf("Rok nie jest przestepny ");
    }
    
    return 0;
}