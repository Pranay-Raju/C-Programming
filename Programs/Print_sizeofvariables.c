#include<stdio.h>
int main()
{
	int integer=1;
	char character[]="Hello!";
	float floating_point=2.0;
	double double_value=1222.0;
	printf("\n size of integer is %d",sizeof(integer));
	printf("\n size of character is %d",sizeof(character));
	printf("\n size of floating_point is %d",sizeof(floating_point));
	printf("\n size of double_value is %d",sizeof(double_value));
	return 0;
}