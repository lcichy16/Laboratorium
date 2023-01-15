#include <stdio.h>
#include <string.h>
struct punkty{
    int x;
    int y;
    
};




void main(){

    
struct punkty xy1;

xy1.x = 4 ;
xy1.y = 4 ;

struct punkty xy2;

xy2.x = 6 ;
xy2.y = 8 ;

struct punkty xy3;

xy3.x = 8 ;
xy3.y = 4;

struct punkty xy4;

xy4.x = 10 ;
xy4.y = 8 ;




if (xy1.y-xy2.y==xy3.y-xy4.y==xy1.x-xy3.x==xy2.x-xy4.x ){
    printf("To jest kwadrat\n");
    ;
}
else if(xy1.x-xy2.x==xy3.x-xy4.x && xy1.y-xy2.y==xy3.y-xy4.y){
    printf("To jest rownoleglobok\n");
}
else {
    printf("To jest trapez\n");
}
}