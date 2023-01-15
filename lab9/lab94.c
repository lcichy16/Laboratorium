#include <stdio.h>
#include <string.h>
struct punkty{
    int x;
    int y;
    
};




void main(){

    
struct punkty xy1;

xy1.x = 5 ;
xy1.y = 6 ;

struct punkty xy2;

xy2.x = 7 ;
xy2.y = 11 ;

float y;
float x;
float a,b;
y = xy1.y-xy2.y;
x = xy1.x-xy2.x;
a = y/ x;
printf("\n To a:%f",a);

b = xy1.y-a*xy1.x;
printf("\n To a:%f",b);

printf("\n Rownanie prostej y=%fax +%fb\n",a,b);



}