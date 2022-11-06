#include<stdio.h>

int main()
{
    int  x,y,z;
    printf("Wpisz 3 liczby  :\n");
    scanf ("%d %d %d",&x,&y,&z);
    
    if (x>y){
        if (x>z)
            printf("Ta liczba jest najwieksza:%d \n",x);
        else{
            printf("Ta liczba jest najwieksza:%d \n",z);
        }
    }
    else {
        printf("Ta liczba jest najwieksza:%d\n",y);
    }

    return 0;
}