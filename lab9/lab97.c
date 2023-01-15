#include <stdio.h>
#include <string.h>
struct punkty{
    int x;
    int y;
    
};




void main(){

    
struct punkty xy1;

xy1.x = 0 ;
xy1.y = 0 ;

struct punkty xy2;

xy2.x = 4 ;
xy2.y = 4 ;

struct punkty xy3;

xy3.x = xy2.x ;
xy3.y = xy1.y ;

struct punkty xy4;

xy4.x = xy1.x ;
xy4.y = xy2.y ;

struct punkty xy5;

xy5.x = 5 ;
xy5.y = 0;




    printf("Pierwsz wspolrzedna :%d,%d\n",xy1.x,xy1.y);
    printf("drug wspolrzedna :%d,%d\n",xy2.x,xy2.y);
    printf("trz wspolrzedna :%d,%d\n",xy3.x,xy3.y);
    printf("czw wspolrzedna :%d,%d\n",xy4.x,xy4.y);


    if (xy1.x<=xy5.x && xy5.x<=xy2.x && xy1.y<=xy5.y && xy5.y<=xy2.y ){

        printf("Punkt lezy w tym kwadracie\n");
    }

    else {
        printf("Punkt nie lezy w tym kwadracie!!\n");
    }
}