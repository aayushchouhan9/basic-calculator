#include<stdio.h>
#include<stdlib.h>
int main()
{
	float num1,num2,result;
	char opr;
	printf("simple calculator ");
	
	printf("enter an operator(+,-,*,/):");
	scanf("%c",&opr);
	
	printf("enter first number:");
	scanf("%f",&num1);
	
	printf("enter second number:");
	scanf("%f",&num2);
	
	if(opr=='+')
	{
		result=num1 + num2;
		printf("%.2f %c %.2f=%.2f\n",num1,opr,num2,result);
		exit(0);
	}
	  else if(opr=='-')
		{
			result=num1 - num2;
		printf("%.2f %c %.2f=%.2f\n",num1,opr,num2,result);
		exit(0);
	
		}
	
	else if(opr=='*')
		{
			result=num1 * num2;
		printf("%.2f %c %.2f=%.2f\n",num1,opr,num2,result);
		exit(0);
	
		}
	else 
	{
		if(opr=='/')
		{
			if(num2!=0)
			{
				result=num1/num2;
				printf("%.2f %c %.2f=%.2f\n",num1,opr,num2,result);
				exit(0);
			}
		}
		if("")
		{
			printf("error! division by zero\n");
			exit(0);
		}
		
	}
	if("")
	{
		printf("invalid operator entered");
	}
	
	
}
