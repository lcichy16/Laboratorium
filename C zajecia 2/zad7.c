#include<stdio.h>

int main()
{
    int  a=7,b,i;
  
    i=2;
    for (i;i<=a;i++){

        
        
        b=a%i;
        printf("%d\n",b);
        if (b==0){break;}
    }
    if (b==0 || i+1<a){
        
        printf("%d jest liczba pierwsza\n",a);
    }
    else{
        printf("%d nie jest liczba pierwsza\n",a);
    }

    return 0;
}
    