//C Program to check Whether the given number is EVEN or ODD
#include<stdio.h>
int main()
{
int number;
printf("Enter the number");
scanf("%d",&number);
if(number%2==0)
{printf("\nGiven number:%d is EVEN",number);}
else
{printf("\nGiven number:%d is ODD",number);}
 return 0;
}
