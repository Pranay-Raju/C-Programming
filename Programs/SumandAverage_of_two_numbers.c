//C Program for finding a Sum and average of two numbers Dynamically
#include<stdio.h>       //header file is included
int main(void)              //main function with datatype,void representing no input string
{
int a,b,sum;              //integers
float average;            //decimals(float values)
printf("Enter the value of a and b");  //print statement
scanf("%d %d",&a,&b);             //scan statement (input statement)
sum=a+b;                        //logic
average=(a+b)/2;                //logic
printf("\nSum of the two numbers is %d",sum);         //print statement of result (sum)
printf("\nAverage of the two numbers is %f",average); //print statement of result (average)
return 0;       //returning integer value to main
}
