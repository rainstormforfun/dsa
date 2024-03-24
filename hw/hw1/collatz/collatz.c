#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int max_count = 0;
	int index = 1;
	for (int i = 1; i <= 100; i++)
	{
		int result = i;
		int count = 0;

		while(result != 1)
		{
			if (result % 2 == 0)
				result /= 2;
			else
				result = 3 * result + 1;
			count++;
		}

		if (max_count < count)
		{
			max_count = count;
			index = i;
		}	
	}

	printf("All numbers are satisfied with collatz conjecture!\n");

	printf("%d has the longest sequence!\n", index);
	printf("The sequence is: \n");
	printf("%d ", index);
	for (int i = 0; i < max_count; i++)
	{
		if (index % 2 == 0)
			index = index / 2;
		else
			index = index * 3 + 1;
		printf("%d ", index);
	}
	printf("\n");
	return EXIT_SUCCESS;
}

