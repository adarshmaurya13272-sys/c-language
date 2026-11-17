 #include<stdio.h>
int main()
{
char ch ;
printf("enter a charecter :");
scanf("%c",&ch);
switch(ch)
{
    case 'a':
    case 'e':
case 'i':
case 'o':
case'u':
 printf("vovel");
 break;
 default:
 printf("consonant");
}
return 0;
}