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

struct punkty xy3;

xy3.x = 7 ;
xy3.y = 5;

struct punkty xy4;

xy4.x = 8 ;
xy4.y = 14 ;


float a,b,x,y,a2,b2,x2,y2;
y = xy1.y-xy2.y;
x = xy1.x-xy2.x;
a = y/ x;
printf("\n To a:%f",a);

b = xy1.y-a*xy1.x;
printf("\n To a:%f",b);

y2 = xy3.y-xy4.y;
x2 = xy3.x-xy4.x;
a2 = y2/x2;
printf("\n To a2:%f",a2);

b2 = xy3.y-a*xy3.x;
printf("\n To b2:%f",b2);
printf("\n Rownanie prostej nr1 y=%fax +%fb\n",a,b);
printf("\n Rownanie prostej nr2 y=%fax +%fb\n",a2,b2);

if (a2==a){
    printf("Proste sa rownolegle");
}
else{
    printf("Proste nie sa do siebie rownolegle\n");
}
}