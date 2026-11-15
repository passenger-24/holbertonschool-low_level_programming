#include <stdio.h>

int main(void)
{
	int Choice = -1;
	double a;
	double b;
	double result;

	while (Choice != 0)
	{
		printf("Simple Calculator\n");
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");
		printf("Choice: ");
		scanf("%d", &Choice);

		if (Choice == 0)
		{
			printf("Bye!\n");
		}
		else if (Choice >= 1 && Choice <= 4)
		{
			printf("A: ");
			scanf("%lf", &a);
			printf("B: ");
			scanf("%lf", &b);

			if (Choice == 1)
			{
				result = a + b;
				printf("Result: %g\n", result);
			}
			else if (Choice == 2)
			{
				result = a - b;
				printf("Result: %g\n", result);
			}
			else if (Choice == 3)
			{
				result = a * b;
				printf("Result: %g\n", result);
			}
			else if (Choice == 4)
			{
				if (b == 0)
				{
					printf("Error: division by zero\n");
				}
				else
				{
					result = a / b;
					printf("Result: %g\n", result);
				}
			}
		}
		else
		{
			printf("Invalid choice\n");
		}
	}
	return (0);
}
