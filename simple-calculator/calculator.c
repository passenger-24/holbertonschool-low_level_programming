#include <stdio.h>

int main(void)
{
	int Choice = -1;

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
	}
	return (0);
}

