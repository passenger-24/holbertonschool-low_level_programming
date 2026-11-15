#include <stdio.h>

int main(void)
{
	int Choice = -1;
	int a;
	int b;
	int result;

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
		else if (Choice == 1)
		{
			printf("A: ");
			scanf("%d", &a);
			printf("B: ");
			scanf("%d", &b);
			result = a + b;
			printf("Result: %d\n", result);
		}

		else if (Choice >= 2 && Choice <= 4)
		{
			printf("Select...\n");
		}
		else
		{
			printf("Invalid choice\n");
		}
	}
	return (0);
}
