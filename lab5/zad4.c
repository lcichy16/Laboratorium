#include <stdio.h>

int main (){



int a,b;
char tab[20];


    printf("Wpisz jakis napis:\n");
        scanf("%s",tab);
    
    printf("Ile napis ma liter:\n");
        scanf("%d",&a);

b=a-1;
int i=0;
for(i;i<a;i++){
printf("to i: %d\n",i+1);
printf("to b:%d\n",b+1);
    if (tab[i]==tab[b]){
        
        printf("%c %c\n",tab[i],tab[b]);
    }
    
    else {
        printf("Wyraz nie jest palindromem\n");
    }
b--;
}

}

