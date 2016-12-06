//C Program to find the simple interest
#include<stdio.h>
int main()
{
int p,t,r; 	//p-principal t-time r-rate
float interest;
printf("enter the value of p,t,r");
scanf("%d %d %d",&p,&t,&r);
interest=(p*t*r)/100;
printf("interest: %f",interest);
return 0;
}
