#include <stdio.h>
int n;
void fib(int n) {

    if (n%2==0 && n>0){
        
        
        fib(n/2);
        printf("%d",0);
}
    else if (n%2==1 && n>0){
        
        
        fib(n/2);
        printf("%d",1);
}
}
int main()
{
    fib(120);
    return 0;
}