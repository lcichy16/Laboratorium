
#include <stdio.h>
int a,wynik;
int silnia(int a){
    if (a==1){
        return a;
    }
    
    else{
        return a*silnia(a-1);
        
        
    }
}
int main()
{
    printf("%d! silnia =%d",6,silnia(6));

    return 0;
}
