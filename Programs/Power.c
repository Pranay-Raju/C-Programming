//program to calculate the power of a number using POW keyword X^N
#include<stdio.h>
#include<math.h>
int main()
{
	int x,n;
	int result;
	printf("\n Enter the value of Base Number");
	scanf("%d",&x);
	printf("\n Enter the value of Power of Base Number");
	scanf("%d",&n);
	result=pow((double)x,n);
	printf("\nResult=%d",result);
	return 0;
	//for execution use commnand cc[space]filename.c[space]-lm
}