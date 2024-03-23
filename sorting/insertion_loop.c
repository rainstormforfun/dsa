#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

void num_generator(int *arr, int len);
void insertion_recursion(int *arr, int len);
void num_printf(int *arr, int len);

int main(void)
{
	int arr[SIZE];

	num_generator(arr, SIZE);

	insertion_recursion(arr, SIZE);

	num_printf(arr, SIZE);

	return EXIT_SUCCESS;
}

void num_generator(int *arr, int len)
{
	srand(time(NULL));
	for (int i = 0; i < len; i++)
	{
		arr[i] = rand() % 100;
	}

	return;
}

void insertion_recursion(int *arr, int len)
{
	for (int i = 1; i < len; i++)
	{
		for (int j = i - 1, k = i; j >= 0; j--, k--)
		{
			if (arr[k] < arr[j])
			{
				arr[k] = arr[k] ^ arr[j];
				arr[j] = arr[k] ^ arr[j];
				arr[k] = arr[k] ^ arr[j];
				continue;
			}
			break;

		}
	}
	return; 
}

void num_printf(int *arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	return;
}
