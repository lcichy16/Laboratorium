#include <stdio.h>
int a,b,c;
int euklides(int a,int b){
    if (a==b){
        return a;
    }
    
    if (a!=b) {
        ;if (a>b){
        
        
        return euklides(a-b,b%a);
        }
        
        else if (a<b){
        
        return euklides(b-a,a%b);
        }
    }
}
int main()
{
    printf("(%d,%d)Euklides=%d",282,78,euklides(282,78));

    return 0;
}