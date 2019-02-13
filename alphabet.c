#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
scanf("%c",&ch);
if(isalpha(ch)==0)
{
printf("It is not an alphabet");
}
else
{
printf("\n it is an alphabet");
}
getch();
}
