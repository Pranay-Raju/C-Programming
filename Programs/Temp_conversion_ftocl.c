#include<stdio.h>
int main(void)
{
	float f,cl;
	int ch;
	printf("\nChoice1:Change the temperature from fahrenheit to celsius");
	printf("\nChoice2:Change the temperature from celsius to fahrenheit");
	printf("\nenter the choice(1,2)");	
	scanf("%d",&ch);
	if(ch==1)
	{
		printf("\nEnter the temperature in fahrenheit");
		scanf("%f",&f);
		f=(cl-32)/1.8;
		printf("\ntemperature in celsius=%f",f);
	}
	else if(ch==2)
	{
		printf("\nEnter the temperature in celsius");
		scanf("%f",&cl);
		cl=(f*1.8)+32;
		printf("\ntemperature in fahrenheit=%f",cl);
		}		
	else
		printf("\nwrong choice enter the number either 1(or)2 ");
	return 0;
}
