#include<stdio.h>
int main()
{
    int day ;
    printf("enter day no (1-3):");

    scanf("%d,day");

    switch(day){
        
case 1:printf("monday");
        break;

case 2 : printf("tuesday");
          break;

case 3 : printf("wedneday");
          break;
defoult: printf("enter a valid input");
    }
    return 0 ;
}
