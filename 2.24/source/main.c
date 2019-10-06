#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b;
	printf("Please enter a number:\n");
	scanf_s("%d", &a);
	if (a%2 == 1)
	{
		printf("This number is odd number\n");
	}
	else
	{
		printf("This number is even number\n");
	}
	system("pause");
	return 0;
}