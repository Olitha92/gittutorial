/*
the programme to detect a odd number and an even number
*/

#include<stdio.h>

int main()
{

	int num;
	double num2;

	printf("Please enter a number: \n");
	scanf("%d", &num);

	num2 = (num)%(2);

	if (num2 == 0)
	{
		printf("the number is an even number\n");
	}

	else
	{
		printf("the number is an odd number\n");
	}


	return 0;
}
