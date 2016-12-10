//program to find the positive difference of two numbers
#include<stdio.h>
int main(void)
{
	int n1,n2,d;
	printf("\nEnter the value of n1 and n2");
	scanf("%d%d",&n1,&n2);
	if(n1>n2)
	{
		d=n1-n2;
		printf("\nDifference of two numbers=%d",d);
	}
	else
	{
		d=n2-n1;
		printf("\nDifference of two numbers=%d",d);
	}
	return 0;
}