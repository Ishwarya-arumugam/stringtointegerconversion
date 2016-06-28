#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
int b;
char a[100];
clrscr();
scanf("%s",a);
b=atoi(a);
if(b>0)
{
printf("\n after the string to integer conversion tha number will be:%d",b);
}
else
{
printf("\n0");
}
getch();
return 0;
}
