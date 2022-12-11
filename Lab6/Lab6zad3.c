#include <stdio.h>
int a,b;
void euklides(int a,int b){
    if (b>a){
        return ;
    }
    
    if (b<=a) {
        printf("%d\n",b);
        euklides(a,b+1);
}
}
int main()
{
    printf("Liczby od 1 do %d\n",12);
    euklides(12,1);
    return 0;
}