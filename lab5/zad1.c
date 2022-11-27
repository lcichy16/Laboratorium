#include <stdio.h>
int a,b;
int znak;
int main (){
printf("Wpisz 2 liczby:");
scanf("%d%d",&a,&b);
printf("Wpisz :\n1 jesli chcesz dodac liczby\n2 jesli chcesz wykonac odejmowanie\n3 jesli chcesz je podzielic\n4 jesli chcesz je pomnozyc\n");
scanf("%d",&znak);

switch (znak)
{
    
    case 1 :
        printf("Wynik dodawania:%d\n",a+b);  
        break;
    case 2 :
         printf("Wynik odejmowania:%d\n",a-b);    
        break;
    case 3 :
         printf("Wynik dzielenia:%d\n",a/b);  
        break;
    case 4 :
         printf("Wynik mnozenia:%d\n",a*b);  
        break;
    default:
        printf("Wybierz poprawna opcje!\n");
        
}




return 0;
}

