#include<stdio.h>
#include<stdlib.h>



int main()
{
	int a;
	int b;
	int c;
	printf("Please enter three numbers!\n");
	scanf_s("%d%d%d", &a, &b, &c);
	if (a == b || b == c || c == a)
	{
		printf("Error\n");
	}
	else
	{
		if (a > b & a > c)
		{
			printf("The largest number is %d\n", a);
		}
		else if (b > a & b > c)
		{
			printf("The largest number is %d\n", b);
		}
		else
		{
			printf("The largest number is %d\n", c);
		}
		if (a < b & a < c)
		{
			printf("The smallest number is %d\n", a);
		}
		else if (b < a & b < c)
		{
			printf("The smallest number is %d\n", b);
		}
		else
		{
			printf("The smallest number is %d\n", c);
		}
	}

	

	system("pause");
	return 0;

}