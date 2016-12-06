//C Program to find the largest among three numbers
#include<stdio.h>
int main()
{
float num1,num2,num3;
float largest;
printf("Enter the value of the number");
scanf("%f %f %f",&num1,&num2,&num3);
if(num1>num2 && num1>num3)
{
largest=num1;
}
else if(num2>num1 && num2>num3)
{
largest=num2;
}
else{
largest=num3;
}
printf("Largest number is: %f",largest);
return 0;
}
